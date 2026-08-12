# PyCTP

## Python 封装的上期所 CTP 接口版本，支持程序化期货交易.

### 版本信息

* 当前版本：v6.7.13_20260225_trader, v6.7.13_20260408_clientdatacollectdll, v6.7.13_20260225_traderSM, v6.7.13_CP_20260408_clientdatacollectdll
* 更新日期：2026-08-11

### 环境:

* Linux: gcc，Python 2.7, 3.10
* Windows 11: Visual Studio 2026，Python 3.10 bit64

### 编译及构建:

### 运行：

```
./build.sh #看穿式监管生产/评测版本+生产版本PC看穿式采集库
./build.sh gen #看穿式监管生产/评测版本+生产版本PC看穿式采集库
./build.sh sm cp gen #穿式监管生产/评测版本（商密）+评测版本PC看穿式采集库
```

> sm 生成商密版本
> cp 采集库使用评测版本
> gen生成对应c/c++代码

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

更改 build.sh / build.bat文件中的 路径位对应的ctp版本
```
ctp_cpp_se="./ctp/v6.7.13_20260225_trader"
ctp_cpp_sm="./ctp/v6.7.13_20260225_traderSM"
clientdatacollectdll_prod=./ctp/v6.7.13_20260408_clientdatacollectdll
clientdatacollectdll_eval=./ctp/v6.7.13_CP_20260408_clientdatacollectdll
```
执行
```
build.sh gen
```


