#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询资金账户

typedef struct PyCThostFtdcQryTradingAccountField {
    PyObject_HEAD
    CThostFtdcQryTradingAccountField data;
} PyCThostFtdcQryTradingAccountField;

extern PyTypeObject PyCThostFtdcQryTradingAccountFieldType;

extern int PyCThostFtdcQryTradingAccountFieldType_init(PyObject *module);

#endif
