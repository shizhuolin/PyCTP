// PyCTP.cpp : Defines the exported functions for the DLL application.
//

// CTP 转 python
// 需要附带 CTP 相关dll文件
// beta 未确保稳定
//cpp接口ctp, 平滑过渡pyctp
//#author: 石卓林
//#http://www.shizhuolin.com
//#mailto:shizhuolin@hotmail.com

#include "stdafx.h"
#include "PyConstants.h"
#include "PyTypes.h"
#include "PyMdApi.h"
#include "PyTraderApi.h"

#define MODULE_NAME "PyCTP"
PyDoc_STRVAR(MODULE_DOC, "CTP for Python author:http://www.shizhuolin.com shizhuolin@hotmail.com qq:383193853");

/// Module exec
static int PyCTP_module_exec(PyObject *m) {
    //批量增加CTP预定义常量
    if ( PyCTP_module_add_PyConstants_exec(m) < 0 ) return -1;

    //批量增加CTP预定义结构
    if ( PyCTP_module_add_PyStructTypes_exec(m) < 0 ) return -1;

    //准备好对象使用 CThostFtdcMdApi
    if ( PyCTP_module_add_PyCThostFtdcMdApiType_exec(m) < 0 ) return -1;

    //准备好对象使用 CThostFtdcTraderApi
    if ( PyCTP_module_add_PyCThostFtdcTraderApiType_exec(m) < 0 ) return -1;

    return 0;
}

#if PY_VERSION_HEX >= 0x030f0000  // Python 3.15+
PyABIInfo_VAR(abi_info);
static PySlot PyCTP_module_slots[] = {
    PySlot_STATIC_DATA(Py_mod_abi, &abi_info),
    PySlot_STATIC_DATA(Py_mod_gil, Py_MOD_GIL_NOT_USED),
    PySlot_STATIC_DATA(Py_mod_name, (char *)MODULE_NAME),
    PySlot_STATIC_DATA(Py_mod_doc, (char *)MODULE_DOC),
    PySlot_FUNC(Py_mod_exec, PyCTP_module_exec),
    PySlot_END  /* Sentinel */
};
#else
static PyModuleDef_Slot PyCTP_module_slots_legacy[] = {
#if PY_VERSION_HEX >= 0x030d0000 // Python 3.13+
    {Py_mod_gil, Py_MOD_GIL_NOT_USED},
#endif // PY_VERSION_HEX
    {Py_mod_exec, (void *)PyCTP_module_exec},
    {0, NULL}  /* Sentinel */
};
static struct PyModuleDef PyCTP_Module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = MODULE_NAME,
    .m_doc = MODULE_DOC,
    .m_size = 0,
    .m_slots = PyCTP_module_slots_legacy,
};
#endif // PY_VERSION_HEX

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
PyMODEXPORT_FUNC PyModExport_PyCTP(void) {
   return PyCTP_module_slots;
}
#else
PyMODINIT_FUNC PyInit_PyCTP(void) {
#if PY_VERSION_HEX < 0x03070000  // Python 3.7
	/* 此扩展多线程 */
	/* Python 3.6 及以下版本需要 */
	PyEval_InitThreads();
#endif // PY_VERSION_HEX
    return PyModuleDef_Init(&PyCTP_Module);
}
#endif // PY_VERSION_HEX
