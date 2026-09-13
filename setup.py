"""Created on Sun Sep 13 09:54:06 2026.

@author: Zhuolin
"""
import os
import platform
import shutil
import struct
import sys
import tempfile
from pathlib import Path

from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext as _build_ext

# ==================== Configuration ====================

PYCTP_CTP_ROOT = Path(os.environ.get('PYCTP_CTP_ROOT', 'ctp/v6.7.13_20260225_trader'))
PYCTP_SRC_DIR = Path('src')
PYCTP_PKG_LIBS_DIR = Path('pkg/PyCTP/libs')

if not PYCTP_CTP_ROOT.is_dir():
    raise SystemExit(f'PYCTP_CTP_ROOT is not a directory: {PYCTP_CTP_ROOT}')

# ==================== Limited API (optional) ====================

PYCTP_LIMITED_API = os.environ.get('PYCTP_LIMITED_API', '')

EXT_LIMITED_API_KWARGS = {}
SETUP_OPTIONS = {}
if PYCTP_LIMITED_API:
    v = sys.version_info
    cp_tag = f'cp{v.major}{v.minor}'
    api_hex = f'0x{v.major:02x}{v.minor:02x}0000'
    cp_tag = f'cp{v.major}{v.minor}'

    EXT_LIMITED_API_KWARGS = {
        'py_limited_api': True,
        'define_macros': [('Py_LIMITED_API', api_hex)],
    }
    SETUP_OPTIONS = {'bdist_wheel': {'py_limited_api': cp_tag}}
    print(f'[PyCTP] Limited API enabled: {api_hex} ({cp_tag}+)')

# ==================== Environment detection ====================

# --- Platform ---
if sys.platform.startswith('linux'):
    if struct.calcsize('P') != 8:
        raise SystemExit('PyCTP requires 64-bit Linux')
    PLATFORM = 'linux64'
elif sys.platform == 'win32':
    PLATFORM = 'win64' if struct.calcsize('P') == 8 else 'win32'
else:
    raise SystemExit(f'Unsupported platform: {sys.platform}')

# --- compiler ---
COMPILER = platform.python_compiler()
IS_MSVC = COMPILER.startswith('MSC')
IS_GCC = COMPILER.startswith('GCC')
IS_CLANG = COMPILER.startswith('Clang')
IS_MINGW = IS_GCC and sys.platform == 'win32'

def _get_dll_arch(path):
    """Read the Machine field from a PE file header. Returns 'win32' or 'win64'."""
    with open(path, 'rb') as f:
        f.seek(0x3C)
        pe_offset = struct.unpack('<I', f.read(4))[0]
        f.seek(pe_offset + 4)
        machine = struct.unpack('<H', f.read(2))[0]
    if machine == 0x8664:
        return 'win64'
    if machine == 0x014C:
        return 'win32'
    raise ValueError(f'Unknown DLL machine 0x{machine:04x}: {path}')

def scan_ctp(root, platform):
    """Recursively scan root, collect c/c++ headers and libraries, bucketed by platform."""
    include_dirs, library_dirs, libraries = set(), set(), set()
    for dirpath, _, filenames in os.walk(root):
        for filename in filenames:
            if platform == 'linux64' and filename.endswith('.so'):
                include_dirs.add(dirpath)
                library_dirs.add(dirpath)
                lib_name = filename[len('lib'):] if filename.startswith('lib') else filename
                lib_name = lib_name[:-len('.so')]
                libraries.add(lib_name)
            elif platform in ('win32', 'win64') and filename.endswith('.dll'):
                if _get_dll_arch(os.path.join(dirpath, filename)) == platform:
                    include_dirs.add(dirpath)
                    library_dirs.add(dirpath)
                    libraries.add(filename[:-len('.dll')])
    return include_dirs, library_dirs, libraries

CTP_INCLUDE_DIRS, CTP_LIBRARY_DIRS, CTP_LIBRARIES = scan_ctp(PYCTP_CTP_ROOT, PLATFORM)
assert CTP_INCLUDE_DIRS, f'No headers found under {PYCTP_CTP_ROOT} for {PLATFORM}'
assert CTP_LIBRARY_DIRS, f'No libraries found under {PYCTP_CTP_ROOT} for {PLATFORM}'
assert CTP_LIBRARIES, f'No library names found under {PYCTP_CTP_ROOT} for {PLATFORM}'

# ==================== Copy CTP libraries into package ====================
# package_data (setup.cfg) only packs files inside the package directory,
# so the runtime libraries must be copied under pkg/PyCTP/libs/ first.

PYCTP_PKG_LIBS_DIR.mkdir(parents=True, exist_ok=True)
for lib_dir in CTP_LIBRARY_DIRS:
    for f in Path(lib_dir).iterdir():
        if f.suffix.lower() in ('.so', '.dll'):
            shutil.copy2(f, PYCTP_PKG_LIBS_DIR / f.name)

# ==================== build_ext ====================

# --- Compile / link flags ---
EXTRA_COMPILE_ARGS = []
RUNTIME_LIBRARY_DIRS = []

if PLATFORM == 'linux64':
    RUNTIME_LIBRARY_DIRS = ['$ORIGIN/libs']
if IS_MSVC:
    EXTRA_COMPILE_ARGS = ['/utf-8']

class build_ext(_build_ext):
    """Switch to a .rsp response file on MSVC when the linker command line is too long."""

    def build_extension(self, ext):
        if self.compiler.compiler_type == 'msvc':
            orig_spawn = self.compiler.spawn
            def spawn(cmd, *args, **kwargs):
                if len(' '.join(cmd)) > 8000:
                    fd, rsp_path = tempfile.mkstemp(
                        suffix='.rsp', prefix='link_args_')
                    os.close(fd)
                    with open(rsp_path, 'w') as f:
                        for arg in cmd[1:]:
                            if ' ' in arg or '\t' in arg:
                                arg = '"' + arg + '"'
                            f.write(arg + '\n')
                    cmd = [cmd[0], '@' + rsp_path]
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
    **EXT_LIMITED_API_KWARGS,
)

setup(ext_modules=[ext], cmdclass={'build_ext': build_ext}, options=SETUP_OPTIONS)
