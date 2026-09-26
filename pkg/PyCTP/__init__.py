import os
import sys

if sys.platform == "win32":
    _libs_dir = os.path.join(os.path.dirname(os.path.abspath(__file__)), "libs")
    if os.path.isdir(_libs_dir):
        if hasattr(os, "add_dll_directory"):
            os.add_dll_directory(_libs_dir)
        else:
            try:
                import ctypes
                ctypes.windll.kernel32.SetDllDirectoryW(_libs_dir)
            except (ImportError, AttributeError, OSError):
                os.environ["PATH"] = _libs_dir + os.pathsep + os.environ.get("PATH", "")

from .PyCTP import *
