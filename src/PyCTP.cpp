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
#include "UserApiStruct.h"
#include "MdApi.h"
#include "TraderApi.h"
#include <FixDataCollect.h>

#define MODULE_NAME "PyCTP"
#define MODULE_DOC "CTP for Python author:http://www.shizhuolin.com shizhuolin@hotmail.com qq:383193853"

///获取AES加密和RSA加密的终端信息
static PyObject *METHOD_CTP_GetSystemInfo(PyObject *self, PyObject *args)
{
	char pSystemInfo[1024];
	int nLen;
	int ret = CTP_GetSystemInfo(pSystemInfo, nLen);
#if PY_MAJOR_VERSION >= 3
	return Py_BuildValue("{s:y#,s:i,s:i}", "SystemInfo", pSystemInfo, nLen, "Length", nLen, "Return", ret);
#else
    return Py_BuildValue("{s:s#,s:i,s:i}", "SystemInfo", pSystemInfo, nLen, "Length", nLen, "Return", ret);
#endif
}

///版本号格式
///Sfit + 生产还是测试秘钥(pro/tst) + 秘钥版本 + 编译时间 + 版本(内部)
static PyObject *METHOD_CTP_GetDataCollectApiVersion(PyObject *self, PyObject *args)
{
    return PyBytes_FromString(CTP_GetDataCollectApiVersion());
}

static PyMethodDef PyCTPMethods[] = {
	{"CTP_GetSystemInfo",  METHOD_CTP_GetSystemInfo, METH_NOARGS, "获取AES加密和RSA加密的终端信息"},
	{"CTP_GetDataCollectApiVersion",  METHOD_CTP_GetDataCollectApiVersion, METH_NOARGS, "版本号格式 Sfit + 生产还是测试秘钥(pro/tst) + 秘钥版本 + 编译时间 + 版本(内部)"},
	{NULL} /* Sentinel */
};

//设置模块
#if PY_MAJOR_VERSION >= 3
static PyModuleDef PyCTP_Module = {PyModuleDef_HEAD_INIT, MODULE_NAME, MODULE_DOC, -1, PyCTPMethods};
#endif

//初始化模块
PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
	PyInit_PyCTP(void)
#else
	initPyCTP(void)
#endif
{

#if PY_VERSION_HEX < 0x03070000
	/* 此扩展多线程 */
	/* Python 3.6 及以下版本需要 */
	PyEval_InitThreads();
#endif

#if PY_MAJOR_VERSION >= 3
	PyObject *m = PyModule_Create(&PyCTP_Module);
#else
	PyObject *m = Py_InitModule3(MODULE_NAME, PyCTPMethods, MODULE_DOC);
#endif
	if( m == NULL )
	{
		PyErr_SetString(PyExc_RuntimeError, "failed to create module.");
#if PY_MAJOR_VERSION >= 3
		return NULL;
#else
		return;
#endif
	}

         //批量增加CTP预定义结构
    if ( PyCTP_All_Type_init(m) < 0
        //批量增加CTP预定义常量
        ||  PyModule_AddCTPConstant(m) < 0
        //准备好对象使用 CThostFtdcMdApi
        ||  CTP_THOST_FTDC_MD_API_TYPE_init(m) < 0
        //准备好对象使用 CThostFtdcTraderApi
        ||  CTP_THOST_FTDC_TRADER_API_TYPE_init(m) < 0
    ) {
        Py_DECREF(m);
#if PY_MAJOR_VERSION >= 3
		return NULL;
#else
		return;
#endif
	}

#if PY_MAJOR_VERSION >= 3
	return m;
#endif
};
