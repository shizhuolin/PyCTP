import os
import platform
import shutil
import struct
import sys
import sysconfig
import tempfile
from pathlib import Path
from typing import Any, Dict, Set

from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext as _build_ext

# -------- Configuration --------
PYCTP_CTP_ROOT = Path(os.environ.get("PYCTP_CTP_ROOT",
                                     "ctp/v6.7.13_20260225_trader"))
PYCTP_SRC_DIR = Path("src")
PYCTP_PKG_LIBS_DIR = Path("pkg/PyCTP/libs")
PYCTP_ABI3 = bool(os.environ.get("PYCTP_ABI3"))
PYCTP_ABI3T = bool(os.environ.get("PYCTP_ABI3T"))

# -------- Environment --------

# ---- PLATFORM = linux64/win32/win64 ----
if sys.platform.startswith("linux"):
    if struct.calcsize("P") != 8:
        raise SystemExit("PyCTP requires 64-bit Linux")
    PLATFORM = "linux64"
elif sys.platform == "win32":
    PLATFORM = "win64" if struct.calcsize("P") == 8 else "win32"
else:
    raise SystemExit("Unsupported platform: {}".format(sys.platform))

# ---- Compiler ----
COMPILER = platform.python_compiler()
IS_MSVC = COMPILER.startswith("MSC")
IS_GCC = COMPILER.startswith("GCC")
IS_CLANG = COMPILER.startswith("Clang")
IS_MINGW = IS_GCC and sys.platform == "win32"

# ---- Method ----
def get_dll_arch(path: Path):
    with path.open("rb") as f:
        f.seek(0x3C)
        pe_offset = struct.unpack("<I", f.read(4))[0]
        f.seek(pe_offset + 4)
        machine = struct.unpack("<H", f.read(2))[0]
    if machine == 0x8664:
        return "win64"
    if machine == 0x014C:
        return "win32"
    raise SystemExit("Unknown DLL machine 0x{:04x}: {}".format(machine, path))

def scan_ctp(root: Path, plat: str):
    include_dirs = set()
    library_dirs = set()
    libraries = set()
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

def copy_libs_to_pkg_dir(src_dir: Set[Path], dst_dir: Path):
    dst_dir.mkdir(parents=True, exist_ok=True)
    for sd in src_dir:
        for f in sd.iterdir():
            if f.suffix.lower() in (".so", ".dll"):
                shutil.copy(str(f), str(dst_dir / f.name))

def get_py_limited_api_options(abi3: bool, abi3t: bool):
    nogil = bool(sysconfig.get_config_var("Py_GIL_DISABLED"))
    # On a free-threaded build – that is, when Py_GIL_DISABLED is defined – 
    # Py_TARGET_ABI3T defaults to the value of Py_LIMITED_API. 
    # https://docs.python.org/3.15/c-api/stable.html#c.Py_TARGET_ABI3T
    if nogil and abi3:
        abi3t = True
    ext_kwargs = {}
    setup_options = {}
    py_ver = sys.version_info
    cp_tag = "cp{}{}".format(py_ver.major, py_ver.minor)
    api_hex = "0x{:02x}{:02x}0000".format(py_ver.major, py_ver.minor)
    # abi3t was added in Python 3.15 (PEP 803).
    # https://peps.python.org/pep-0803/
    if abi3t and py_ver < (3, 15):
        raise SystemExit("abi3t requires Python 3.15+")
    if abi3:
        ext_kwargs["py_limited_api"] = True
        ext_kwargs.setdefault(
            "define_macros",[]).append(("Py_LIMITED_API", api_hex))
        setup_options["bdist_wheel"] = {"py_limited_api": cp_tag}
    if abi3t:
        ext_kwargs["py_limited_api"] = True
        ext_kwargs.setdefault(
            "define_macros", []).append(("Py_TARGET_ABI3T", api_hex))
        setup_options["bdist_wheel"] = {"py_limited_api": cp_tag}
    return ext_kwargs, setup_options

class build_ext(_build_ext):
    """Switch to a .rsp response file on MSVC when 
    the linker command line is too long."""
    def build_extension(self, ext):
        if self.compiler.compiler_type == "msvc":
            orig_spawn = self.compiler.spawn
            def spawn(cmd, *args, **kwargs):
                if len(" ".join(cmd)) > 8000:
                    fd, rsp_path = tempfile.mkstemp(
                        suffix=".rsp", prefix="link_args_")
                    os.close(fd)
                    with open(rsp_path, "w") as f:
                        for arg in cmd[1:]:
                            if " " in arg or "\t" in arg:
                                arg = '"' + arg + '"'
                            f.write(arg + "\n")
                    cmd = [cmd[0], "@" + rsp_path]
                return orig_spawn(cmd, *args, **kwargs)
            self.compiler.spawn = spawn
        super().build_extension(ext)

# ---- Scan Includes and libs for c/c++ ----
if not PYCTP_CTP_ROOT.is_dir():
    raise SystemExit(
        "PYCTP_CTP_ROOT is not a directory: {}".format(PYCTP_CTP_ROOT))
CTP_INCLUDE_DIRS, CTP_LIBRARY_DIRS, CTP_LIBRARIES = scan_ctp(PYCTP_CTP_ROOT,
                                                             PLATFORM)
if not CTP_INCLUDE_DIRS:
    raise SystemExit("No headers found under {} for {}".format(PYCTP_CTP_ROOT,
                                                               PLATFORM))
if not CTP_LIBRARY_DIRS:
    raise SystemExit(
        "No libraries found under {} for {}".format(PYCTP_CTP_ROOT, PLATFORM))
if not CTP_LIBRARIES:
    raise SystemExit(
        "No library names found under {} for {}".format(PYCTP_CTP_ROOT,
                                                        PLATFORM))

# ---- process libs for package ----
copy_libs_to_pkg_dir(CTP_LIBRARY_DIRS, PYCTP_PKG_LIBS_DIR)
EXT_KWARGS, SETUP_OPTIONS = get_py_limited_api_options(PYCTP_ABI3, PYCTP_ABI3T)

# ----  ----
EXTRA_COMPILE_ARGS = []
RUNTIME_LIBRARY_DIRS = []

if PLATFORM == "linux64":
    RUNTIME_LIBRARY_DIRS = ["$ORIGIN/libs"]
if IS_MSVC:
    EXTRA_COMPILE_ARGS = ["/utf-8"]

ext = Extension(  
    'PyCTP.PyCTP',
    sources=[str(p) for p in PYCTP_SRC_DIR.rglob('*.cpp')],
    include_dirs=(
        [str(PYCTP_SRC_DIR)]
        + sorted(str(p) for p in CTP_INCLUDE_DIRS)),
    library_dirs=sorted(str(p) for p in CTP_LIBRARY_DIRS),
    libraries=sorted(CTP_LIBRARIES),
    language='c++',
    extra_compile_args=EXTRA_COMPILE_ARGS,
    runtime_library_dirs=RUNTIME_LIBRARY_DIRS,
    **EXT_KWARGS,
    )

setup(
    ext_modules=[ext],
    cmdclass={'build_ext': build_ext},
    options=SETUP_OPTIONS
    )
