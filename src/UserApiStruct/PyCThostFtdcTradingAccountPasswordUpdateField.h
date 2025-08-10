#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令变更域

typedef struct PyCThostFtdcTradingAccountPasswordUpdateField {
    PyObject_HEAD
    CThostFtdcTradingAccountPasswordUpdateField data;
} PyCThostFtdcTradingAccountPasswordUpdateField;

extern PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateFieldType;

extern int PyCThostFtdcTradingAccountPasswordUpdateFieldType_init(PyObject *module);

#endif
