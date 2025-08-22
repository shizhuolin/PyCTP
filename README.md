# PyCTP

## Python 封装的上期所 CTP 接口版本，支持程序化期货交易.

### 版本信息

* 当前版本：v6.7.11_20250617 + sfit_pro_1.0_20220124_1468_FIX
* 更新日期：2025-08-11

### 环境:

* Linux: gcc，Python 2.7, 3.6, 3.8, 3.9
* Windows 11: Visual Studio 2022，Python 3,10, 3.13

### 编译及构建:

### 运行：

```
python setup.py build
```

在 *build/lib.linux-x86_64-cpython-39/*（Linux 示例路径）目录下会生成编译好的库文件和示范 Python 文件

> 编译指南请参考文件：PyCTP Compile Guide.html

[http://www.shizhuolin.com/2015/11/07/1120.html](http://www.shizhuolin.com/2015/11/07/1120.html)

### 编译其它版本的ctp

#### 更新ctp库

1. 下载ctp，解压并存放到ctp路径，模仿ctp/v6.7.11_20250617保存,路径不能含中文字符
> 路径格式 ./ctp/<ctp版本>/<操作系统>/
 
2. 更改api中的所有(*.h)头文件为utf8编码，api支持linux64,win32,win64三种操作系统，一共12个头文件都要更改
> 用记事本打开头文件，文件 > 另存为 编码选择 utf8,覆盖原文件  
> 头文件名 ThostFtdcMdApi.h, ThostFtdcTraderApi.h, ThostFtdcUserApiDataType.h, ThostFtdcUserApiStruct.h

3. linux64文件夹中的libthostmduserapi_se.so, libthosttraderapi_se.so 文件名区分大小写.
> 有些版本可能不带_se后缀  
> 某些版本的linux库文件名不带*lib*前缀， 需要更改库文件名加上*lib*前缀

#### 更新采集库

1. 下载采集库，解压并存放到ctp路径，模仿ctp/sfit_pro_1.0_20220124_1468_FIX保存,路径不能含中文字符
> 路径格式:  
> ./ctp/<采集库版本>/<头文件>  
> ./ctp/<采集库版本>/<Linux操作系统>/<Linux库文件>  
> ./ctp/<采集库版本>/<Windows操作系统>/(32/64)/<Windows库文件>  
> Linux库文件带*lib*前缀，区分大小写

2. 更改所有(DataCoolect.h或FixDataCoolect.h)头文件为utf8编码.

#### 生成文件

1. ctpgenbyast.py 668行, 字符串更改为linux64版本ctp-api头文件夹路径
 ```
ctp_cpp_path = './ctp/v6.7.11_20250617/v6.7.11_20250617_api_traderapi_se_linux64'
```

2. 删除 ./src/UserApiStruct/ 文件夹中的所有文件
> 不同版本的ctp之间会增删api,如果不删除旧文件，可能会编译错误.

3. 使用python3.6或更高的python生成新文件, 此操作会生成适配ctp版本的c/c++文件.
 ```
pip3 install libclang
python3 ctpgenbyast.py
```

#### 更改代码

1. ./src/PyCTP.cpp 17行
 ```
#include <FixDataCollect.h>
```
> 更改为采集库 (例 ./ctp/sfit_pro_1.0_20220124_1468_FIX/**xxx.h**" 头文件名， 可能是 DataCoolect.h或FixDataCoolect.h

2. setup.py 11-21行 更改ctp文件路径.
 ```
linux_ctp = ['./ctp/v6.7.11_20250617/v6.7.11_20250617_api_traderapi_se_linux64'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX/linux']

win32_ctp = ['./ctp/v6.7.11_20250617/20250617_traderapi_se_windows'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX/windows/32']

win64_ctp = ['./ctp/v6.7.11_20250617/20250617_traderapi64_se_windows'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX'
             , './ctp/sfit_pro_1.0_20220124_1468_FIX/windows/64']
```
分别是三个操作系统适配的ctp头文件和链接库文件夹路径， 采集库头文件夹路径， 采集库链接库文件夹路径.

3. setup.py 127行， 更改链接库名称
 ```
,libraries=[ 'thostmduserapi_se', 'thosttraderapi_se', 'FixLinuxDataCollect' if platform.system() == 'Linux' else 'FixWinDataCollect'])
```
thostmduserapi_se 对应 ./ctp/<ctp版本>/<操作系统>/libthostmduserapi_se.so (windows是thostmduserapi_se.lib/dll)  
thosttraderapi_se 对应 ./ctp/<ctp版本>/<操作系统>/libthosttraderapi_se.so (windows是thosttraderapi_se.lib/dll)  
FixLinuxDataCollect 对应 ./ctp/<采集库版本>/<Linux操作系统>/libFixLinuxDataCollect.so  
FixWinDataCollect 对应 ./ctp/<采集库版本>/<Windows操作系统>/(32/64)/FixWinDataCollect.dll  
 > 有些版本可能不带"_se"后缀，有些不带"Fix"前缀,根据不同版本的链接库文件名设置对应的链接库名称，区分大小写.

#### 编译
 ```
python setup.py build
```
在 *build/lib.linux-x86_64-cpython-39/*（Linux 示例路径）目录下会生成编译好的库文件和示范 Python 文件
 


