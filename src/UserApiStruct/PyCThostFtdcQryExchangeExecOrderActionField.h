#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告操作查询

typedef struct PyCThostFtdcQryExchangeExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryExchangeExecOrderActionField data;
} PyCThostFtdcQryExchangeExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryExchangeExecOrderActionFieldType;

extern int PyCThostFtdcQryExchangeExecOrderActionFieldType_init(PyObject *module);

#endif
