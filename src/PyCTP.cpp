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
#include "UserApiDataType.h"
#include "MdApi.h"
#include "TraderApi.h"

#define MODULE_NAME "PyCTP"
#define MODULE_DOC "CTP 201612191535 for Python author:http://www.shizhuolin.com shizhuolin@hotmail.com qq:383193853"

//设置模块
#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef PyCTP_Module = {PyModuleDef_HEAD_INIT, MODULE_NAME, MODULE_DOC, -1};
#endif

//初始化模块
PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
	PyInit_PyCTP(void)
#else
	initPyCTP(void)
#endif
{
	/* 此扩展多线程 */
	PyEval_InitThreads();

#if PY_MAJOR_VERSION >= 3 
	PyObject *m = PyModule_Create(&PyCTP_Module);
#else
	static PyMethodDef PyCTPMethods[] = {{NULL, NULL, 0, NULL}};
	PyObject *m = Py_InitModule3(MODULE_NAME, PyCTPMethods, MODULE_DOC);
#endif
	if( m == nullptr )
	{
		PyErr_SetString(PyExc_RuntimeError, "failed to create module.");
#if PY_MAJOR_VERSION >= 3 
		return nullptr;
#else
		return;
#endif
	}

	/* 准备好对象使用 CThostFtdcMdApi  */
	if (PyType_Ready(&CTP_THOST_FTDC_MD_API_TYPE) < 0){
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMdApi");
#if PY_MAJOR_VERSION >= 3 
		return nullptr;
#else
		return;
#endif
	}

	Py_INCREF(&CTP_THOST_FTDC_MD_API_TYPE);
	PyModule_AddObject(m, "CThostFtdcMdApi", (PyObject *)&CTP_THOST_FTDC_MD_API_TYPE);

	/* 准备好对象使用 CThostFtdcTraderApi  */
	if (PyType_Ready(&CTP_THOST_FTDC_TRADER_API_TYPE) < 0){
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderApi");
#if PY_MAJOR_VERSION >= 3 
		return nullptr;
#else
		return;
#endif
	}

	Py_INCREF(&CTP_THOST_FTDC_TRADER_API_TYPE);
	PyModule_AddObject(m, "CThostFtdcTraderApi", (PyObject *)&CTP_THOST_FTDC_TRADER_API_TYPE);

	//批量增加CTP预定义常量
	PyModule_AddCTPConstant(m);

#if PY_MAJOR_VERSION >= 3 
	return m;
#endif
};
