# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 14:39:27 2016

@author: zhuolin
"""
import platform
from distutils.core import setup, Extension
from os.path import join, split, dirname

linux_ctp = ['./v6.6.9_20220914_95719.2466/v6.6.9_20220914_api/v6.6.9_20220914_20220914_api_tradeapi_se_linux64', './v6.6.9_20220914_95719.2466/clientdll/v6.6.7_20220613_api_clientdatacollectdll_linux64']
win32_ctp = ['./v6.6.9_20220914_95719.2466/v6.6.9_20220914_winApi/tradeapi/20220914_tradeapi_se_windows', './v6.6.9_20220914_95719.2466/clientdll/20220613_clientdll_windows']
win64_ctp = ['./v6.6.9_20220914_95719.2466/v6.6.9_20220914_winApi/tradeapi/20220914_tradeapi64_se_windows', './v6.6.9_20220914_95719.2466/clientdll/20220613_clientdll64_windows']

headers = ['stdafx.h', 'UserApiDataType.h', 'UserApiStruct.h', 'MdApi.h', 'TraderApi.h', 'test_PyCTP.py']
sources = ['stdafx.cpp', 'PyCTP.cpp', 'UserApiDataType.cpp', 'UserApiStruct.cpp', 'MdApi.cpp', 'TraderApi.cpp']

sources = [join('.', 'src', file) for file in sources]
depends = [join('.', 'src', file) for file in headers]

optional = {}
if platform.system() == 'Linux':
  optional['extra_compile_args'] = ['-std=c++11']
  optional['runtime_library_dirs'] = ['./']
  optional['include_dirs']=linux_ctp
  optional['library_dirs']=linux_ctp
  # depend_dynamics = ['libthostmduserapi.so', 'libthosttraderapi.so']
if platform.system() == 'Windows':
  optional['include_dirs'] = win32_ctp
  optional['library_dirs'] = win32_ctp
  if '64 bit' in platform.python_compiler():
    optional['include_dirs'] = win64_ctp
    optional['library_dirs'] = win64_ctp
    # depend_dynamics = ['thostmduserapi.dll', 'thosttraderapi.dll']
argments = dict(name='PyCTP',
                sources=sources,
                language='c++',
                libraries=['thostmduserapi_se', 'thosttraderapi_se', 'LinuxDataCollect' if platform.system() == 'Linux' else 'WinDataCollect'],
                depends=depends)
argments.update(optional)

setup(name='PyCTP',
      version='1.1.1',
      description='CTP for Python',
      long_description='CTP for Python',
      author='Shi Zhuolin',
      author_email='shizhuolin@hotmail.com',
      url='http://www.pyctp.org/',
      keywords=['ctp','futures','stock'],
      license='LGPL-3.0',
      platforms=['linux-x86_64','win32','win-amd64'],
      ext_modules=[Extension(**argments)],
      scripts=['./src/test_PyCTP.py'],
      # data_files=[('lib64', depend_dynamics)],
      # packages=['PyCTP'],
      # package_dir={'PyCTP':optional['library_dirs'][0]},
      # package_data={'PyCTP':depend_dynamics}
      )
