# PyCTP

CTP 期货接口的 Python 封装。

## 支持

| 项 | 值 |
|---|---|
| CTP 标准版 | `v6.7.13_20260225_trader` |
| CTP 国密版 | `v6.7.13_20260225_traderSM` |
| Python | 3.5 ~ 3.15 |
| 平台 | Linux x86_64 / Windows x86 / Windows x64 |

## 安装

### 前置条件

- Python 3.6 或更高
- C 编译器（Linux: gcc； Windows: MSVC 或 MinGW）
- CTP SDK（见下）

### 默认安装（本地编译，性能优先）
```bash
    pip install .
```
默认从 `ctp/v6.7.13_20260225_trader` 读取 CTP SDK。

### 指定 CTP SDK 路径

```bash
    PYCTP_CTP_ROOT=/path/to/ctp pip install .
```

`PYCTP_CTP_ROOT` 指向包含头文件和库文件的目录, SDK 目录内头文件和库文件需在同一目录下。

### 构建 abi3 wheel（跨 Python 版本）
```bash
    PYCTP_ABI3=1 pip wheel .
```
生成 `pyctp-x.x.x-cpXX-abi3-<platform>.whl`，
可安装到编译时的 Python 版本及以上。

### 切换到国密版
```bash
    PYCTP_CTP_ROOT=ctp/v6.7.13_20260225_traderSM python ctpgenbyast.py
    PYCTP_CTP_ROOT=ctp/v6.7.13_20260225_traderSM pip install .
```

## 使用

完整可运行的示例见 [`tests/test_pyctp.py`](tests/test_pyctp.py)。

基本流程：

```python
import PyCTP

api = PyCTP.CThostFtdcMdApi.CreateFtdcMdApi()
api.RegisterSpi(my_spi)          # 自定义回调对象
api.RegisterFront('tcp://...')
api.Init()

```

## 更新 CTP SDK

1. 下载 CTP SDK，解压到 `ctp/<版本>/`。路径不能含中文字符。

2. 确认目录结构（头文件和库文件同目录）：

       ctp/v6.7.13_20260225_trader/
       ├── linux64/
       │   ├── ThostFtdcMdApi.h
       │   ├── libthostmduserapi_se.so
       │   └── ...
       ├── win32/
       └── win64/

3. 将 CTP 头文件转换为 UTF-8 编码。

   CTP 官方头文件在不同版本、不同平台上编码可能不一致（GBK、
   GB18030 或混杂），需要统一转为 UTF-8 才能编译。

   需要处理的文件（4 个）：

   - `ThostFtdcMdApi.h`
   - `ThostFtdcTraderApi.h`
   - `ThostFtdcUserApiDataType.h`
   - `ThostFtdcUserApiStruct.h`

   推荐使用编辑器手动转换（如 VS Code、Notepad++ 都支持
   编码转换）

4. Linux 库文件名加 `lib` 前缀（如缺）：
```bash
cd ctp/<版本>/linux64/
for f in thost*.so; do [ -f "$f" ] && mv "$f" "lib$f"; done
```

## 开发

克隆仓库，以可编辑模式安装：
```bash
    git clone https://github.com/shizhuolin/PyCTP.git
    cd PyCTP
    pip install -e .
```

修改 `src/` 下的源码后，重新运行 `pip install -e .` 重新编译。

## 链接

- 期货模拟仿真系统：[`https://www.simnow.com.cn/`](https://www.simnow.com.cn/)  
- CTP API 手册和演示: [`https://www.simnow.com.cn/static/apiDownload.action`](https://www.simnow.com.cn/static/apiDownload.action)
- 历史文档：[`http://www.shizhuolin.com/2015/11/07/1120.html`](http://www.shizhuolin.com/2015/11/07/1120.html)

## License

LGPL-3.0