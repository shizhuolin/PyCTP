#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPFUTURESIGNOUTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签退响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspFutureSignOutField data;
} PyCThostFtdcRspFutureSignOutFieldData;

extern PyTypeObject *PyCThostFtdcRspFutureSignOutFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspFutureSignOutFieldType_exec(PyObject *module);

#endif