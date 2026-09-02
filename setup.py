# -*- coding: utf-8 -*-
"""
PyCTP 扩展模块构建脚本
"""
import platform, sys, os, shutil, tempfile, re
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext as _build_ext

# UTF-8 BOM 字节(EF BB BF), 前置到临时副本文件头
UTF8_BOM = b'\xef\xbb\xbf'


def find_include_lib_path(root_dir,
                          linux_ctp,
                          win32_ctp,
                          win64_ctp,
                          libraries):
    """递归扫描目录, 收集 .so/.dll 所在目录与库名(按平台分桶)。"""
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


# CTP 依赖路径(可用环境变量覆盖)
ctp_cpp_path = os.environ.get('ctp_cpp_path', './ctp/v6.7.13_20260225_trader')
clientdatacollectdll = os.environ.get(
    'clientdatacollectdll',
    './ctp/v6.7.13_20260408_clientdatacollectdll')

src_dir = './src'

# 收集 CTP 各平台库目录与库名
linux_ctp, win32_ctp, win64_ctp, libraries = [], [], [], []
linux_ctp, win32_ctp, win64_ctp, libraries = find_include_lib_path(
    ctp_cpp_path, linux_ctp, win32_ctp, win64_ctp, libraries)
linux_ctp, win32_ctp, win64_ctp, libraries = find_include_lib_path(
    clientdatacollectdll, linux_ctp, win32_ctp, win64_ctp, libraries)
linux_ctp = list(set(linux_ctp))
win32_ctp = list(set(win32_ctp))
win64_ctp = list(set(win64_ctp))
libraries = list(set(libraries))


def is_vc9_or_older():
    """判断是否为 VC9(MSVC 2008, 版本号1500) 及更老编译器。
    这类编译器不支持 /utf-8, 缩放无 BOM UTF-8 源码, 需 BOM 副本。"""
    m = re.search(r'MSC v\.(\d+)', platform.python_compiler())
    ver = int(m.group(1)) if m else 0
    return sys.platform == 'win32' and 0 < ver <= 1500


vc9 = is_vc9_or_older()  # True 时启用 UTF8 BOM 副本工作区


def list_all_files(src_dir):
    """递归收集 .h 头文件 / .c .cpp 源文件 / 其它文件。"""
    header_list, source_list, other_list = [], [], []
    for dirpath, dirnames, filenames in os.walk(src_dir):
        for filename in filenames:
            full_path = os.path.join(dirpath, filename)
            if full_path.endswith('.h'):
                header_list.append(full_path)
            elif full_path.endswith(('.c', '.cpp')):
                source_list.append(full_path)
            else:
                other_list.append(full_path)
    return header_list, source_list, other_list


def get_runtime_dirs():
    """运行时库搜索路径: Linux 用 $ORIGIN, macOS 用 @loader_path。"""
    if sys.platform.startswith("linux"):
        return ["$ORIGIN"]
    elif sys.platform == "darwin":
        return ["@loader_path"]
    return []  # Windows 没有 rpath 机制


def get_extra_compile_args():
    """/utf-8 仅在非 VC9 的 Windows 编译器下使用(VC9 设了也会被忽略并报 D9002)。"""
    if sys.platform == "win32" and not vc9:
        return ['/utf-8']
    return []


def get_extra_link_args():
    """链接器 rpath, 仅 Linux / macOS 需要。"""
    if sys.platform.startswith("linux"):
        return ["-Wl,-rpath,$ORIGIN"]
    elif sys.platform == "darwin":
        return ["-Wl,-rpath,@loader_path"]
    return []


def _bom_copy(src, dst, bom=UTF8_BOM):
    """把 src 复制为带 UTF-8 BOM 的 dst(内容字节保留, 只额外前置 BOM)。"""
    with open(src, 'rb') as f:
        data = f.read()
    with open(dst, 'wb') as out:
        if data[:3] != bom:
            out.write(bom)
        out.write(data)


def make_bom_staging(build_base, targets):
    """把 targets 下每个文件镜像为带 BOM 的临时副本, 用于 `vc9` 分支编译。
    返回 (副本根目录, {原路径->副本路径})。不改动源文件。"""
    root = os.path.join(build_base, '.bom_staging')
    if os.path.exists(root):
        shutil.rmtree(root)
    mapping = {}
    for s in targets:
        dst = os.path.join(root, os.path.relpath(s, src_dir))
        d = os.path.dirname(dst)
        if not os.path.isdir(d):
            os.makedirs(d)
        _bom_copy(s, dst)
        mapping[s] = dst
    return root, mapping


class build_ext(_build_ext, object):
    def run(self):
        # 无论编译成功或失败都清理 BOM 临时副本目录(仅在 vc9 分支创建过)
        try:
            super(build_ext, self).run()
        finally:
            if vc9:
                shutil.rmtree('./build/.bom_staging', ignore_errors=True)
        # 把运行时需要的 DLL/SO 及测试脚本拷到扩展产物同目录
        for ext in self.extensions:
            build_dir = os.path.dirname(self.get_ext_fullpath(ext.name))
            extra_files = set()
            for library_dir in ext.library_dirs:
                for filename in os.listdir(library_dir):
                    if filename.lower().endswith(('so', 'dll')):
                        extra_files.add(os.path.join(library_dir, filename))
            extra_files.add('./tests/test_pyctp.py')
            extra_files.add('./tests/test_data_collect.py')
            for f in extra_files:
                if os.path.exists(f):
                    shutil.copy(f, build_dir)

    def build_extension(self, ext):
        # MSVC 下, 当链接命令行过长(>8000字符)时改用 .rsp 响应文件
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

# 从 CTP 目录路径提取版本号(如 v6.7.13_...) 拼成描述
ctp_version = set()
for path in (linux_ctp + win32_ctp + win64_ctp):
    for s in path.split('/'):
        if any(c.isdigit() for c in s):
            ctp_version.add(s)
            break
long_description = ' + '.join(ctp_version)

# 按当前平台组装 include/library 目录与打包数据
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

# --- VC9 编码修复: 编译改用带 BOM 的临时副本, include_dirs 前置副本目录 ---
if vc9:
    staging_root, _map = make_bom_staging('./build', sources + headers)
    sources = [_map[s] for s in sources]
    # CTP include 下无 BOM 的头(如 DataCollect.h)也做副本, 按文件名平铺到 _ctp
    ctp_inc = win64_ctp if '64 bit' in platform.python_compiler() else win32_ctp
    ctp_dir = os.path.join(staging_root, '_ctp')
    if not os.path.isdir(ctp_dir):
        os.makedirs(ctp_dir)
    seen = set()
    for d in ctp_inc:
        if not os.path.isdir(d):
            continue
        for name in os.listdir(d):
            if not name.endswith('.h') or name in seen:
                continue
            seen.add(name)
            src = os.path.join(d, name)
            with open(src, 'rb') as f:
                if f.read(3) != UTF8_BOM:
                    _bom_copy(src, os.path.join(ctp_dir, name))
    optional['include_dirs'] = [staging_root, ctp_dir] + list(optional.get('include_dirs', []))

argments = dict(name='PyCTP'
                , sources=sources
                , language='c++'
                , runtime_library_dirs=get_runtime_dirs()
                , extra_compile_args=get_extra_compile_args()
                , extra_link_args=get_extra_link_args()
                , libraries=libraries)
argments.update(optional)

setup(name='PyCTP'
      , version='2.0.2'
      , description='CTP for Python (' + long_description + ')'
      , long_description='CTP for Python (' + long_description + ')'
      , author='Shi Zhuolin'
      , author_email='shizhuolin@hotmail.com'
      , url='https://github.com/shizhuolin/PyCTP'
      , keywords=['ctp', 'futures', 'stock']
      , license='LGPL-3.0'
      , platforms=['linux-x86_64', 'win32', 'win-amd64']
      , ext_modules=[Extension(**argments)]
      , cmdclass={"build_ext": build_ext})