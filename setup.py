# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 14:39:27 2016

@author: zhuolin
"""

import platform
from distutils.core import setup, Extension
from os.path import join, split, dirname

headers = ['stdafx.h', 'UserApiDataType.h', 'UserApiStruct.h', 'MdApi.h', 'TraderApi.h']
sources = ['stdafx.cpp', 'UserApiDataType.cpp', 'UserApiStruct.cpp', 'MdApi.cpp', 'TraderApi.cpp', 'PyCTP.cpp']

sources = [join('.', 'src', file) for file in sources]
depends = [join('.', 'src', file) for file in headers]

optional = {}
if platform.system() == 'Linux':
    optional['extra_compile_args'] = ['-std=c++11']
    optional['runtime_library_dirs'] = ['./']
    optional['include_dirs']=['./v6.3.6_20160606_api_tradeapi_linux64']
    optional['library_dirs']=['./v6.3.6_20160606_api_tradeapi_linux64']
if platform.system() == 'Windows':
    optional['include_dirs'] = ['./v6.3.6_20160606_tradeapi_windows']
    optional['library_dirs'] = ['./v6.3.6_20160606_tradeapi_windows']
    if '64 bit' in platform.python_compiler():
        optional['include_dirs'] = ['./v6.3.6_20160606_tradeapi64_windows']
        optional['library_dirs'] = ['./v6.3.6_20160606_tradeapi64_windows']
argments = dict(name='PyCTP',
                sources=sources,
                language='c++',
                libraries=['thostmduserapi', 'thosttraderapi'],
                depends=depends)
argments.update(optional)
setup(name='PyCTP',
      version='1.0',
      description='CTP for Python',
      author='shi-zhuolin',
      author_email='shizhuolin@hotmail.com',
      url='http://www.shizhuolin.com',
      ext_modules=[Extension(**argments)],
      scripts=['./src/test_PyCTP.py'])

