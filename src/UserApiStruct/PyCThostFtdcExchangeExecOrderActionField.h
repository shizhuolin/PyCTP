#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告操作

typedef struct PyCThostFtdcExchangeExecOrderActionField {
    PyObject_HEAD
    CThostFtdcExchangeExecOrderActionField data;
} PyCThostFtdcExchangeExecOrderActionField;

extern PyTypeObject PyCThostFtdcExchangeExecOrderActionFieldType;

extern int PyCThostFtdcExchangeExecOrderActionFieldType_init(PyObject *module);

#endif
