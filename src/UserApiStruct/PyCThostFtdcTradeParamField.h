#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易参数

typedef struct PyCThostFtdcTradeParamField {
    PyObject_HEAD
    CThostFtdcTradeParamField data;
} PyCThostFtdcTradeParamField;

extern PyTypeObject PyCThostFtdcTradeParamFieldType;

extern int PyCThostFtdcTradeParamFieldType_init(PyObject *module);

#endif
