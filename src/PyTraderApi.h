//行情API转PyCTP

#ifndef PYCTP_PYTRADERAPI_H
#define PYCTP_PYTRADERAPI_H

#include "stdafx.h"
#include <ThostFtdcTraderApi.h>

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    /* Type-specific fields go here. */
	CThostFtdcTraderApi *api; /* api */
	CThostFtdcTraderSpi *spi; /* 回调spi */
	PyObject *pySpi;	  /* py代码回调 */
} PyCThostFtdcTraderApiData;

extern PyTypeObject *PyCThostFtdcTraderApiType;
extern int PyCTP_module_add_PyCThostFtdcTraderApiType_exec(PyObject *module);

#endif