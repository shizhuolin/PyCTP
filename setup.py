# -*- coding: utf-8 -*-
"""
Created on Sun Aug 10 12:39:25 CST 2025

@author: zhuolin
"""
import platform, sys, os, shutil, tempfile
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext as _build_ext

def find_include_lib_path(root_dir, linux_ctp, win32_ctp, win64_ctp, libraries):
    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.so'):
                linux_ctp.append(dirpath)
                libraries.append(filename)
            if filename.endswith('.dll'):
                if all(k in dirpath for k in ['64_', 'windows']):
                    win64_ctp.append(dirpath)
                else:
                    win32_ctp.append(dirpath)
                libraries.append(filename)
    return linux_ctp, win32_ctp, win64_ctp, libraries

ctp_cpp_path = './ctp/v6.7.13_20260225_trader'
clientdatacollectdll = './ctp/v6.7.13_20260408_clientdatacollectdll'

ctp_cpp_path = os.environ.get('ctp_cpp_path', ctp_cpp_path)
clientdatacollectdll = os.environ.get('clientdatacollectdll', clientdatacollectdll)

src_dir ='./src'

linux_ctp, win32_ctp, win64_ctp, libraries = [], [], [], []
linux_ctp, win32_ctp, win64_ctp, libraries = find_include_lib_path(ctp_cpp_path, linux_ctp, win32_ctp, win64_ctp, libraries)
linux_ctp, win32_ctp, win64_ctp, libraries = find_include_lib_path(clientdatacollectdll, linux_ctp, win32_ctp, win64_ctp, libraries)
linux_ctp = list(set(linux_ctp))
win32_ctp = list(set(win32_ctp))
win64_ctp = list(set(win64_ctp))
libraries = list(set(libraries))

def list_all_files(src_dir):
    header_list, source_list, other_list = [], [], []
    for dirpath, dirnames, filenames in os.walk(src_dir):
        for filename in filenames:
            full_path = os.path.join(dirpath, filename)
            if full_path.endswith('.h'):
                header_list.append(full_path)
            elif full_path.endswith('.c'):
                source_list.append(full_path)
            elif full_path.endswith('.cpp'):
                source_list.append(full_path)
            else:
                other_list.append(full_path)
    return header_list, source_list, other_list

def get_runtime_dirs():
    if sys.platform.startswith("linux"):
        return ["$ORIGIN"]
    elif sys.platform == "darwin":
        return ["@loader_path"]
    else:
        return []  # Windows 不用 rpath
    
def get_extra_compile_args():
    if sys.platform == "win32":
        return ['/utf-8']
    return []

def get_extra_link_args():
    if sys.platform.startswith("linux"):
        return ["-Wl,-rpath,$ORIGIN"]
    elif sys.platform == "darwin":
        return ["-Wl,-rpath,@loader_path"]
    else:
        return []

class build_ext(_build_ext, object):
    def run(self):
        super(build_ext, self).run()
        for ext in self.extensions:
            build_dir = os.path.dirname(self.get_ext_fullpath(ext.name))
            extra_files = set()
            for library_dir in ext.library_dirs:
                for filename in os.listdir(library_dir):
                    if filename.lower().endswith(('so','dll')):
                        extra_files.add( os.path.join(library_dir, filename) )
            extra_files.add('./tests/test_pyctp.py')
            for f in extra_files:
                if os.path.exists(f):
                    shutil.copy(f, build_dir)
                    
    def build_extension(self, ext):
        if self.compiler.compiler_type == 'msvc':
            orig_spawn = self.compiler.spawn
            def spawn(cmd, *args, **kwargs):
                if len(' '.join(cmd)) > 8000:
                    fd, rsp_path = tempfile.mkstemp(suffix=".rsp", prefix="link_args_")
                    os.close(fd)
                    with open(rsp_path, "w") as f:
                        for arg in cmd[1:]:
                            if ' ' in arg or '\t' in arg:
                                arg = '"' + arg + '"'
                            f.write(arg + "\n")
                    cmd = [cmd[0], "@" + rsp_path]
                return orig_spawn(cmd, *args, **kwargs)
            self.compiler.spawn = spawn
        super(build_ext, self).build_extension(ext)
    
headers, sources, others = list_all_files(src_dir)

ctp_version = set()
for path in (linux_ctp + win32_ctp + win64_ctp):
    for s in path.split('/'):
        if any(c.isdigit() for c in s):
            ctp_version.add(s)
            break
long_description = ' + '.join(ctp_version)

optional = {}
package_data = []
if platform.system() == 'Linux':
    optional['include_dirs'] = linux_ctp
    optional['library_dirs'] = linux_ctp
    package_data.extend([os.path.join(path, '*.h') for path in linux_ctp])
    package_data.extend([os.path.join(path, '*.so') for path in linux_ctp])
    libraries = [lib.replace('lib', '').replace('.so', '') for lib in libraries if lib.endswith('.so')]
if platform.system() == 'Windows':
    optional['include_dirs'] = win32_ctp
    optional['library_dirs'] = win32_ctp
    package_data.extend([os.path.join(path, '*.h') for path in win32_ctp])
    package_data.extend([os.path.join(path, '*.dll') for path in win32_ctp])
    if '64 bit' in platform.python_compiler():
        optional['include_dirs'] = win64_ctp
        optional['library_dirs'] = win64_ctp
        package_data.extend([os.path.join(path, '*.h') for path in win64_ctp])
        package_data.extend([os.path.join(path, '*.dll') for path in win64_ctp])
    libraries = [lib.replace('.dll', '') for lib in libraries if lib.endswith('.dll')]
        
argments = dict( name = 'PyCTP'
                ,sources = sources
                ,language='c++'
                ,runtime_library_dirs = get_runtime_dirs()
                ,extra_compile_args = get_extra_compile_args()
                ,extra_link_args = get_extra_link_args()
                ,libraries = libraries)
argments.update(optional)

setup( name = 'PyCTP'
      ,version = '2.0.1'
      ,description = 'CTP for Python (' + long_description + ')'
      ,long_description = 'CTP for Python (' + long_description + ')'
      ,author = 'Shi Zhuolin'
      ,author_email = 'shizhuolin@hotmail.com'
      ,url = 'https://github.com/shizhuolin/PyCTP'
      ,keywords = ['ctp','futures','stock']
      ,license = 'LGPL-3.0'
      ,platforms = ['linux-x86_64','win32','win-amd64']
      ,ext_modules = [Extension(**argments)]
      ,cmdclass={"build_ext": build_ext})
