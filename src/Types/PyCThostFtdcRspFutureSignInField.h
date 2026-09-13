#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPFUTURESIGNINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPFUTURESIGNINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签到响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspFutureSignInField data;
} PyCThostFtdcRspFutureSignInFieldData;

extern PyTypeObject *PyCThostFtdcRspFutureSignInFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspFutureSignInFieldType_exec(PyObject *module);

#endif