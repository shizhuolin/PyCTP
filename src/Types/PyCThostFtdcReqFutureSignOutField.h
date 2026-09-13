#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQFUTURESIGNOUTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签退请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqFutureSignOutField data;
} PyCThostFtdcReqFutureSignOutFieldData;

extern PyTypeObject *PyCThostFtdcReqFutureSignOutFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqFutureSignOutFieldType_exec(PyObject *module);

#endif