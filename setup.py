import contextlib
import os
import shutil
import struct
import sys
import sysconfig
import tempfile
from pathlib import Path
from typing import Any, Dict, List, Set, Tuple, cast

from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext

PYCTP_CTP_ROOT_DEFAULT = "ctp/v6.7.13_20260225_trader"
PYCTP_CTP_ROOT = Path(os.environ.get("PYCTP_CTP_ROOT", PYCTP_CTP_ROOT_DEFAULT))
PYCTP_SRC_DIR = Path("src")
PYCTP_PKG_LIBS_DIR = Path("pkg/PyCTP/libs")
PYCTP_ABI3 = os.environ.get("PYCTP_ABI3", "").lower() in ("1", "true", "yes")
PYCTP_ABI3T = os.environ.get("PYCTP_ABI3T", "").lower() in ("1", "true", "yes")
PYCTP_COMPILE_OPTIONS = {"msvc": ["/utf-8"]}  # type: Dict[str, List[str]]
PYCTP_LINK_OPTIONS = {}  # type: Dict[str, List[str]]

def detect_platform() -> str:
    if sys.platform.startswith("linux"):
        if struct.calcsize("P") != 8:
            msg = "PyCTP requires 64-bit Linux"
            raise SystemExit(msg)
        return "linux64"
    if sys.platform == "win32":
        return "win64" if struct.calcsize("P") == 8 else "win32"
    msg = "Unsupported platform: {}".format(sys.platform)
    raise SystemExit(msg)

def get_dll_arch(path: Path) -> str:
    with path.open("rb") as f:
        f.seek(0x3C)
        pe_offset = struct.unpack("<I", f.read(4))[0]
        f.seek(pe_offset + 4)
        machine = struct.unpack("<H", f.read(2))[0]
    if machine == 0x8664:
        return "win64"
    if machine == 0x014C:
        return "win32"
    msg = "Unknown DLL machine 0x{:04x}: {}".format(machine, path)
    raise SystemExit(msg)

def scan_ctp(root: Path, plat: str) -> Tuple[Set[Path], Set[Path], Set[str]]:
    include_dirs = set()  # type: Set[Path]
    library_dirs = set()  # type: Set[Path]
    libraries = set()  # type: Set[str]
    for dirpath, _, filenames in os.walk(str(root)):
        for filename in filenames:
            if plat == "linux64" and filename.endswith(".so"):
                include_dirs.add(Path(dirpath))
                library_dirs.add(Path(dirpath))
                lib_name = (filename[len("lib"):]
                            if filename.startswith("lib") else filename)
                lib_name = lib_name[:-len(".so")]
                libraries.add(lib_name)
            elif plat in ("win32", "win64") and filename.endswith(".dll"):
                if get_dll_arch(Path(dirpath) / filename) == plat:
                    include_dirs.add(Path(dirpath))
                    library_dirs.add(Path(dirpath))
                    libraries.add(filename[:-len(".dll")])
    return include_dirs, library_dirs, libraries

def copy_libs_to_pkg_dir(src_dir: Set[Path], dst_dir: Path) -> None:
    dst_dir.mkdir(parents=True, exist_ok=True)
    for sd in src_dir:
        for f in sd.iterdir():
            if f.suffix.lower() in (".so", ".dll"):
                shutil.copy(str(f), str(dst_dir / f.name))

def get_py_limited_api_options(
        *, abi3: bool, abi3t: bool) -> Tuple[Dict[str, Any], Dict[str, Any]]:
    nogil = bool(sysconfig.get_config_var("Py_GIL_DISABLED"))
    # On a free-threaded build - that is, when Py_GIL_DISABLED is defined -
    # Py_TARGET_ABI3T defaults to the value of Py_LIMITED_API.
    # https://docs.python.org/3.15/c-api/stable.html#c.Py_TARGET_ABI3T
    if nogil and abi3:
        abi3t = True
    ext_kwargs = {}  # type: Dict[str, Any]
    setup_options = {}  # type: Dict[str, Any]
    py_ver = sys.version_info
    cp_tag = "cp{}{}".format(py_ver.major, py_ver.minor)
    api_hex = "0x{:02x}{:02x}0000".format(py_ver.major, py_ver.minor)
    # abi3t was added in Python 3.15 (PEP 803).
    # https://peps.python.org/pep-0803/
    if abi3t and py_ver < (3, 15):
        msg = "abi3t requires Python 3.15+"
        raise SystemExit(msg)
    if abi3:
        ext_kwargs["py_limited_api"] = True
        cast("List[Tuple[str, str]]",
             ext_kwargs.setdefault(
                 "define_macros", [])).append(("Py_LIMITED_API", api_hex))
        setup_options["bdist_wheel"] = {"py_limited_api": cp_tag}
    if abi3t:
        ext_kwargs["py_limited_api"] = True
        cast("List[Tuple[str, str]]",
             ext_kwargs.setdefault(
                 "define_macros", [])).append(("Py_TARGET_ABI3T", api_hex))
        setup_options["bdist_wheel"] = {"py_limited_api": cp_tag}
    return ext_kwargs, setup_options

class BuildExt(build_ext):
    """Switch to a .rsp response file on MSVC when
    the linker command line is too long.
    """
    def build_extensions(self) -> None:
        compiler_type = self.compiler.compiler_type
        c_flags = PYCTP_COMPILE_OPTIONS.get(compiler_type, [])
        l_flags = PYCTP_LINK_OPTIONS.get(compiler_type, [])
        for ext in self.extensions:
            ext.extra_compile_args = c_flags + ext.extra_compile_args
            ext.extra_link_args = l_flags + ext.extra_link_args
        if compiler_type == "msvc":
            self._patch_spawn_for_rsp()
        super().build_extensions()

    def _patch_spawn_for_rsp(self) -> None:
        orig_spawn = self.compiler.spawn
        def spawn(
                cmd: List[str],
                *args: Any, **kwargs: Any) -> int:  # noqa: ANN401
            rsp_path = None
            if len(" ".join(cmd)) > 8000:
                fd, tmp = tempfile.mkstemp(suffix=".rsp", prefix="link_args_")
                os.close(fd)
                rsp_path = Path(tmp)
                with rsp_path.open("w") as f:
                    for arg in cmd[1:]:
                        quoted = arg
                        if " " in arg or "\t" in arg:
                            quoted = '"' + arg + '"'
                        f.write(quoted + "\n")
                cmd = [cmd[0], "@" + tmp]
            try:
                return orig_spawn(cmd, *args, **kwargs)
            finally:
                if rsp_path is not None:
                    with contextlib.suppress(OSError):
                        rsp_path.unlink()
        self.compiler.spawn = spawn

if not PYCTP_CTP_ROOT.is_dir():
    msg = "PYCTP_CTP_ROOT is not a directory: {}".format(PYCTP_CTP_ROOT)
    raise SystemExit(msg)

PLATFORM = detect_platform()

CTP_INCLUDE_DIRS, CTP_LIBRARY_DIRS, CTP_LIBRARIES = scan_ctp(
    PYCTP_CTP_ROOT, PLATFORM)
if not CTP_INCLUDE_DIRS:
    msg = "No headers found under {} for {}".format(
        PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)
if not CTP_LIBRARY_DIRS:
    msg = "No libraries found under {} for {}".format(
        PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)
if not CTP_LIBRARIES:
    msg = "No library names found under {} for {}".format(
         PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)

copy_libs_to_pkg_dir(CTP_LIBRARY_DIRS, PYCTP_PKG_LIBS_DIR)
EXT_KWARGS, SETUP_OPTIONS = get_py_limited_api_options(
    abi3=PYCTP_ABI3, abi3t=PYCTP_ABI3T)

if PLATFORM.startswith("linux"):
    EXT_KWARGS["runtime_library_dirs"] = ["$ORIGIN/libs"]

ext = Extension(
    "PyCTP.PyCTP",
    sources=[str(p) for p in PYCTP_SRC_DIR.rglob("*.cpp")],
    include_dirs=sorted(str(p) for p in CTP_INCLUDE_DIRS),
    library_dirs=sorted(str(p) for p in CTP_LIBRARY_DIRS),
    libraries=sorted(CTP_LIBRARIES),
    language="c++",
    **EXT_KWARGS,
    )

setup(
    ext_modules=[ext],
    cmdclass={"build_ext": BuildExt},
    options=SETUP_OPTIONS,
    )
