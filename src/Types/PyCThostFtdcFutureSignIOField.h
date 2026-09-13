#ifndef PYCTP_TYPES_PYCTHOSTFTDCFUTURESIGNIOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFUTURESIGNIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签到签退

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcFutureSignIOField data;
} PyCThostFtdcFutureSignIOFieldData;

extern PyTypeObject *PyCThostFtdcFutureSignIOFieldType;
extern int PyCTP_module_add_PyCThostFtdcFutureSignIOFieldType_exec(PyObject *module);

#endif