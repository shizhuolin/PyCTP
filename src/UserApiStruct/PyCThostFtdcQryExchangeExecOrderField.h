#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告查询

typedef struct PyCThostFtdcQryExchangeExecOrderField {
    PyObject_HEAD
    CThostFtdcQryExchangeExecOrderField data;
} PyCThostFtdcQryExchangeExecOrderField;

extern PyTypeObject PyCThostFtdcQryExchangeExecOrderFieldType;

extern int PyCThostFtdcQryExchangeExecOrderFieldType_init(PyObject *module);

#endif
