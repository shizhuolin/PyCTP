import os
import platform
import shutil
import struct
import sys
import sysconfig
import tempfile
from pathlib import Path

from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext as _build_ext

PYCTP_CTP_ROOT = Path(os.environ.get("PYCTP_CTP_ROOT", "ctp/v6.7.13_20260225_trader"))
PYCTP_SRC_DIR = Path("src")
PYCTP_PKG_LIBS_DIR = Path("pkg/PyCTP/libs")
PYCTP_LIMITED_API = os.environ.get("PYCTP_LIMITED_API")
SIZEOF_POINTER_64BIT_BYTES = 8

if not PYCTP_CTP_ROOT.is_dir():
    msg = "PYCTP_CTP_ROOT is not a directory: {}".format(PYCTP_CTP_ROOT)
    raise SystemExit(msg)

if sys.platform.startswith("linux"):
    if struct.calcsize("P") != SIZEOF_POINTER_64BIT_BYTES:
        msg = "PyCTP requires 64-bit Linux"
        raise SystemExit(msg)
    PLATFORM = "linux64"
elif sys.platform == "win32":
    PLATFORM = "win64" if struct.calcsize("P") == SIZEOF_POINTER_64BIT_BYTES else "win32"
else:
    msg = "Unsupported platform: {}".format(sys.platform)
    raise SystemExit(msg)

COMPILER = platform.python_compiler()
IS_MSVC = COMPILER.startswith("MSC")
IS_GCC = COMPILER.startswith("GCC")
IS_CLANG = COMPILER.startswith("Clang")
IS_MINGW = IS_GCC and sys.platform == "win32"

def get_dll_arch(path):
    with open(path, "rb") as f:
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

def scan_ctp(root, plat):
    include_dirs, library_dirs, libraries = set(), set(), set()
    for dirpath, _, filenames in os.walk(str(root)):
        for filename in filenames:
            if plat == "linux64" and filename.endswith(".so"):
                include_dirs.add(dirpath)
                library_dirs.add(dirpath)
                lib_name = filename[len("lib"):] if filename.startswith("lib") else filename
                lib_name = lib_name[:-len(".so")]
                libraries.add(lib_name)
            elif plat in ("win32", "win64") and filename.endswith(".dll"):
                if get_dll_arch(os.path.join(dirpath, filename)) == plat:
                    include_dirs.add(dirpath)
                    library_dirs.add(dirpath)
                    libraries.add(filename[:-len(".dll")])
    return include_dirs, library_dirs, libraries

def get_py_limited_api_options(is_py_limited_api):
    ext_kwargs, setup_options = {}, {}
    if is_py_limited_api:
        is_freethreaded = bool(sysconfig.get_config_var("Py_GIL_DISABLED"))
        v = sys.version_info
        cp_tag = "cp{}{}".format(v.major, v.minor)
        api_hex = "0x{:02x}{:02x}0000".format(v.major, v.minor)
        ext_kwargs = {
            "py_limited_api": True,
            "define_macros": [("Py_LIMITED_API", api_hex)],
        }
        setup_options = {"bdist_wheel": {"py_limited_api": cp_tag}}
        if is_freethreaded:
            ext_kwargs["define_macros"] = [("Py_TARGET_ABI3T", api_hex)]
            setup_options["bdist_wheel"] = {"py_limited_api": "{}-abi3t".format(cp_tag)}
    return ext_kwargs, setup_options

EXT_KWARGS, SETUP_OPTIONS = get_py_limited_api_options(PYCTP_LIMITED_API)

CTP_INCLUDE_DIRS, CTP_LIBRARY_DIRS, CTP_LIBRARIES = scan_ctp(PYCTP_CTP_ROOT, PLATFORM)

if not CTP_INCLUDE_DIRS:
    msg = "No headers found under {} for {}".format(PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)

if not CTP_LIBRARY_DIRS:
    msg = "No libraries found under {} for {}".format(PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)

if not CTP_LIBRARIES:
    msg = "No library names found under {} for {}".format(PYCTP_CTP_ROOT, PLATFORM)
    raise SystemExit(msg)

PYCTP_PKG_LIBS_DIR.mkdir(parents=True, exist_ok=True)
for item in PYCTP_PKG_LIBS_DIR.iterdir():
    if item.is_dir():
        shutil.rmtree(str(item))
    else:
        item.unlink()
for lib_dir in CTP_LIBRARY_DIRS:
    for f in Path(lib_dir).iterdir():
        if f.suffix.lower() in (".so", ".dll"):
            shutil.copy2(str(f), str(PYCTP_PKG_LIBS_DIR / f.name))

EXTRA_COMPILE_ARGS = []
RUNTIME_LIBRARY_DIRS = []

if PLATFORM == "linux64":
    RUNTIME_LIBRARY_DIRS = ["$ORIGIN/libs"]
if IS_MSVC:
    EXTRA_COMPILE_ARGS = ["/utf-8"]

class build_ext(_build_ext):
    """Switch to a .rsp response file on MSVC when the linker command line is too long."""
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

ext = Extension(  
    'PyCTP.PyCTP',
    sources=[str(p) for p in PYCTP_SRC_DIR.rglob('*.cpp')],
    include_dirs=[str(PYCTP_SRC_DIR)] + sorted(CTP_INCLUDE_DIRS),
    library_dirs=sorted(CTP_LIBRARY_DIRS),
    libraries=sorted(CTP_LIBRARIES),
    language='c++',
    extra_compile_args=EXTRA_COMPILE_ARGS,
    runtime_library_dirs=RUNTIME_LIBRARY_DIRS,
    **EXT_KWARGS,
)

setup(ext_modules=[ext], cmdclass={'build_ext': build_ext}, options=SETUP_OPTIONS)
