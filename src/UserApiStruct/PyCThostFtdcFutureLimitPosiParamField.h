#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURELIMITPOSIPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURELIMITPOSIPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货持仓限制参数

typedef struct PyCThostFtdcFutureLimitPosiParamField {
    PyObject_HEAD
    CThostFtdcFutureLimitPosiParamField data;
} PyCThostFtdcFutureLimitPosiParamField;

extern PyTypeObject PyCThostFtdcFutureLimitPosiParamFieldType;

extern int PyCThostFtdcFutureLimitPosiParamFieldType_init(PyObject *module);

#endif
