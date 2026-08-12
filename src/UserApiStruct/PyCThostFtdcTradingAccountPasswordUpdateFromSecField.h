#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFROMSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///来自次席的资金账户口令变更

typedef struct PyCThostFtdcTradingAccountPasswordUpdateFromSecField {
    PyObject_HEAD
    CThostFtdcTradingAccountPasswordUpdateFromSecField data;
} PyCThostFtdcTradingAccountPasswordUpdateFromSecField;

extern PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType;

extern int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init(PyObject *module);

#endif
