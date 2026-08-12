#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURESIGNIOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURESIGNIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签到签退

typedef struct PyCThostFtdcFutureSignIOField {
    PyObject_HEAD
    CThostFtdcFutureSignIOField data;
} PyCThostFtdcFutureSignIOField;

extern PyTypeObject PyCThostFtdcFutureSignIOFieldType;

extern int PyCThostFtdcFutureSignIOFieldType_init(PyObject *module);

#endif
