//行情API转PyCTP

#ifndef PYCTP_PYMDAPI_H
#define PYCTP_PYMDAPI_H

#include "stdafx.h"
#include <ThostFtdcMdApi.h>

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    /* Type-specific fields go here. */
	CThostFtdcMdApi *api; /* api */
	CThostFtdcMdSpi *spi; /* 回调spi */
	PyObject *pySpi;	  /* py代码回调 */
} PyCThostFtdcMdApiData;

extern PyTypeObject *PyCThostFtdcMdApiType;
extern int PyCTP_module_add_PyCThostFtdcMdApiType_exec(PyObject *module);

#endif