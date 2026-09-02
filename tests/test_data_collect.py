# -*- coding: utf-8 -*-
"""
Python ctypes wrapper for DataCollect API.

Compatible with Python 2/3, Windows/Linux.
Supports automatic detection of calling convention on Windows.

Examples
--------
>>> from data_collect import DataCollect
>>> dc = DataCollect(['./libDataCollect.so', 'DataCollect.dll'])
>>> ret, info, length = dc.CTP_GetSystemInfo()
>>> print(hex(ret), info, length)
>>> version = dc.CTP_GetDataCollectApiVersion()
>>> print(version)
"""

import ctypes
import sys
import os

# ---------- Platform detection ----------
IS_WINDOWS = sys.platform.startswith('win')
IS_LINUX = sys.platform.startswith('linux')

# Default library name for current platform
DEFAULT_LIB_NAME = "DataCollect.dll" if IS_WINDOWS else "libDataCollect.so"

# ---------- Symbol name candidates ----------
# Common C++ mangled names (Itanium ABI) for the two exported functions.
DEFAULT_SYMBOL_CANDIDATES = {
    'CTP_GetSystemInfo': [
        'CTP_GetSystemInfo',
        '_Z17CTP_GetSystemInfoPci',
        '_Z17CTP_GetSystemInfoPcRi',
    ],
    'CTP_GetDataCollectApiVersion': [
        'CTP_GetDataCollectApiVersion',
        '_Z28CTP_GetDataCollectApiVersionv',
        '_Z28CTP_GetDataCollectApiVersion',
    ]
}


class DataCollect(object):
    """
    Wrapper for DataCollect dynamic library.

    Parameters
    ----------
    lib_path : str or list of str, optional
        Path to the shared library. If a list is given, the first existing file
        will be used. Defaults to the platform-specific default name in the
        current directory.
    symbol_map : dict, optional
        Manual mapping from function name (e.g. 'CTP_GetSystemInfo') to the
        actual exported symbol name (string). Useful when the default candidates
        do not match.
    use_cdecl : bool or None, optional
        Only relevant on Windows. If None, the calling convention is automatically
        detected. If True, force CDLL (__cdecl). If False, force WinDLL (__stdcall).
    """

    def __init__(self, lib_path=None, symbol_map=None, use_cdecl=None):
        self._symbol_map = symbol_map or {}
        self._use_cdecl = use_cdecl

        # Resolve library path
        self.lib_path = self._find_library(lib_path)

        # Load library (with automatic calling convention detection on Windows)
        self._load_library()

        # Bind functions
        self._setup_functions()

    def _find_library(self, lib_path):
        """Return the first existing path from a string or list; if None, use default."""
        if lib_path is None:
            lib_path = DEFAULT_LIB_NAME
        if isinstance(lib_path, (list, tuple)):
            for path in lib_path:
                if os.path.exists(path):
                    return path
            raise FileNotFoundError(
                "None of the given library paths exist: {}".format(lib_path)
            )
        return lib_path

    def _load_library(self):
        """Load the library, auto-detecting calling convention if requested."""
        if IS_WINDOWS and self._use_cdecl is None:
            self._auto_detect_calling_convention()
        else:
            use_cdecl = self._use_cdecl if self._use_cdecl is not None else False
            self._load_with_convention(use_cdecl)

    def _load_with_convention(self, use_cdecl):
        """Load the library with the specified calling convention."""
        if IS_WINDOWS:
            self.lib = ctypes.CDLL(self.lib_path) if use_cdecl else ctypes.WinDLL(self.lib_path)
        else:
            self.lib = ctypes.CDLL(self.lib_path)

    def _auto_detect_calling_convention(self):
        """
        Try both WinDLL and CDLL, using a parameter‑less function as a probe.
        """
        for use_cdecl in [False, True]:
            try:
                self._load_with_convention(use_cdecl)
                # Probe with get_api_version (no arguments)
                for name in DEFAULT_SYMBOL_CANDIDATES['CTP_GetDataCollectApiVersion']:
                    try:
                        func = getattr(self.lib, name)
                        func.restype = ctypes.c_char_p
                        func()  # test call
                        return  # success
                    except (AttributeError, ValueError, OSError):
                        continue
            except Exception:
                continue
        # If all attempts fail, default to WinDLL and raise an error
        self._load_with_convention(False)
        raise RuntimeError(
            "Could not auto‑detect calling convention. Please specify `use_cdecl` "
            "explicitly. Usually, MSVC‑compiled libraries use __stdcall (False), "
            "while MinGW/GCC‑compiled ones use __cdecl (True)."
        )

    def _try_get_function(self, func_name):
        """
        Retrieve a function by trying all candidate symbol names.

        Parameters
        ----------
        func_name : str
            Logical name (e.g., 'CTP_GetSystemInfo').

        Returns
        -------
        ctypes.CFunctionType
            The bound function.

        Raises
        ------
        AttributeError
            If no candidate symbol is found.
        """
        if func_name in self._symbol_map:
            candidates = [self._symbol_map[func_name]]
        else:
            candidates = DEFAULT_SYMBOL_CANDIDATES.get(func_name, [])

        for name in candidates:
            try:
                return getattr(self.lib, name)
            except AttributeError:
                continue

        raise AttributeError(
            "Could not find symbol for '{}'. Tried: {}. "
            "Use `symbol_map` to specify the correct mangled name.".format(
                func_name, candidates
            )
        )

    def _setup_functions(self):
        """Set up the two exported functions with correct argument/return types."""
        self._func_GetSystemInfo = self._try_get_function('CTP_GetSystemInfo')
        self._func_GetSystemInfo.argtypes = [
            ctypes.c_char_p,
            ctypes.POINTER(ctypes.c_int)
        ]
        self._func_GetSystemInfo.restype = ctypes.c_int

        self._func_GetApiVersion = self._try_get_function('CTP_GetDataCollectApiVersion')
        self._func_GetApiVersion.argtypes = []
        self._func_GetApiVersion.restype = ctypes.c_char_p

    # ---------- Public API ----------

    def CTP_GetSystemInfo(self, buf_size=512):
        """
        获取AES加密和RSA加密的终端信息 pSystemInfo的空间需要调用者自己分配 至少270个字节.

        windows返回值定义
        返回的int值 不为0 表示采集信息有误 具体哪个采集项有问题需要做如下判断
        从低位开始分别标示 终端信息 ->系统盘分区信息
        返回值 & （0x01 << 0） 不为0 表示终端类型未采集到
        返回值 & （0x01 << 1） 不为0 表示 信息采集时间获取异常
        返回值 & （0x01 << 2） 不为0 表示ip 获取失败  （采集多个相同类型信息的场景有一个采集到 即表示采集成功）
        返回值 & （0x01 << 3） 不为0 表示mac 获取失败
        返回值 & （0x01 << 4） 不为0 表示 设备名 获取失败
        返回值 & （0x01 << 5） 不为0 表示 操作系统版本 获取失败
        返回值 & （0x01 << 6） 不为0 表示 硬盘序列号 获取失败
        返回值 & （0x01 << 7） 不为0 表示 CPU序列号 获取失败
        返回值 & （0x01 << 8） 不为0 表示 BIOS 获取失败
        返回值 & （0x01 << 9） 不为0 表示 系统盘分区信息 获取失败
        
        linux返回值定义
        返回的int值 不为0 表示采集信息有误 具体哪个采集项有问题需要做如下判断
        从低位开始分别标示 终端信息 -> BIOS信息
        返回值 & （0x01 << 0） 不为0 表示终端类型未采集到
        返回值 & （0x01 << 1） 不为0 表示 信息采集时间获取异常
        返回值 & （0x01 << 2） 不为0 表示ip 获取失败  （采集多个相同类型信息的场景有一个采集到 即表示采集成功）
        返回值 & （0x01 << 3） 不为0 表示mac 获取失败
        返回值 & （0x01 << 4） 不为0 表示 设备名 获取失败
        返回值 & （0x01 << 5） 不为0 表示 操作系统版本 获取失败
        返回值 & （0x01 << 6） 不为0 表示 硬盘序列号 获取失败
        返回值 & （0x01 << 7） 不为0 表示 CPU序列号 获取失败
        返回值 & （0x01 << 8） 不为0 表示 BIOS 获取失败

        Parameters
        ----------
        buf_size : int, optional
            Buffer size in bytes (must be at least 270).

        Returns
        -------
        ret : int
            Return code (bitmask indicating which fields failed).
        info : bytes
            Encrypted/AES+RSA encoded terminal information (raw bytes).
        length : int
            Actual length of the data written into the buffer.

        Notes
        -----
        The returned `info` is a raw byte sequence. Do not decode it as a string;
        it is meant to be transmitted as‑is.
        """
        if buf_size < 270:
            raise ValueError("buf_size must be at least 270")
        buf = ctypes.create_string_buffer(buf_size)
        n_len = ctypes.c_int(buf_size)
        ret = self._func_GetSystemInfo(buf, ctypes.byref(n_len))
        return ret, buf.value, n_len.value

    def CTP_GetDataCollectApiVersion(self):
        """
        版本号格式.

        Returns
        -------
        bytes
            Sfit + 生产还是测试秘钥(pro/tst) + 秘钥版本 + 编译时间 + 版本(内部)
        """
        ver = self._func_GetApiVersion()
        return ver if ver is not None else b''

# ========== Self-test ==========
if __name__ == "__main__":
    import PyCTP
    # Example usage
    try:
        # Try current directory default, or fallback to other name
        dc = DataCollect(["./libDataCollect.so", "DataCollect.dll"])
    except Exception as e:
        print("Initialization failed:", e)
        sys.exit(1)

    ret, info, length = dc.CTP_GetSystemInfo()
    print("Return code: 0x{:08x}".format(ret))
    print("Length:", length)
    print("Info (raw bytes):", info)
    
    version = dc.CTP_GetDataCollectApiVersion()
    print("API version (raw bytes):", version)
    
    print("API version (C/C++ bytes):", PyCTP.CTP_GetDataCollectApiVersion())