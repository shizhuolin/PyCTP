#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPFUTURESIGNOUTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签退响应

typedef struct PyCThostFtdcRspFutureSignOutField {
    PyObject_HEAD
    CThostFtdcRspFutureSignOutField data;
} PyCThostFtdcRspFutureSignOutField;

extern PyTypeObject PyCThostFtdcRspFutureSignOutFieldType;

extern int PyCThostFtdcRspFutureSignOutFieldType_init(PyObject *module);

#endif
