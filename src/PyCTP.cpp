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

//设置模块
static struct PyModuleDef PyCTP_Module = {
	PyModuleDef_HEAD_INIT
	, "PyCTP", "CTP 201507230629 for Python author:http://www.shizhuolin.com shizhuolin@hotmail.com qq:383193853", -1
};

//初始化模块
PyMODINIT_FUNC PyInit_PyCTP(void)
{
	/* 此扩展多线程 */
	PyEval_InitThreads();

	PyObject *m = PyModule_Create(&PyCTP_Module);
	if( m == nullptr )
	{
		PyErr_SetString(PyExc_RuntimeError, "failed to create module.");
		return nullptr;
	}

	/* 准备好对象使用 CThostFtdcMdApi  */
	if (PyType_Ready(&CTP_THOST_FTDC_MD_API_TYPE) < 0){
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMdApi");
		return nullptr;
	}

	Py_INCREF(&CTP_THOST_FTDC_MD_API_TYPE);
	PyModule_AddObject(m, "CThostFtdcMdApi", (PyObject *)&CTP_THOST_FTDC_MD_API_TYPE);

	/* 准备好对象使用 CThostFtdcTraderApi  */
	if (PyType_Ready(&CTP_THOST_FTDC_TRADER_API_TYPE) < 0){
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTraderApi");
		return nullptr;
	}

	Py_INCREF(&CTP_THOST_FTDC_TRADER_API_TYPE);
	PyModule_AddObject(m, "CThostFtdcTraderApi", (PyObject *)&CTP_THOST_FTDC_TRADER_API_TYPE);

	//批量增加CTP常量
	PyModule_AddCTPConstant(m);

    return m;
};
