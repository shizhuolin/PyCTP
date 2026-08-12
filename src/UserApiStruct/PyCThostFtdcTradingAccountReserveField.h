#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户基本准备金

typedef struct PyCThostFtdcTradingAccountReserveField {
    PyObject_HEAD
    CThostFtdcTradingAccountReserveField data;
} PyCThostFtdcTradingAccountReserveField;

extern PyTypeObject PyCThostFtdcTradingAccountReserveFieldType;

extern int PyCThostFtdcTradingAccountReserveFieldType_init(PyObject *module);

#endif
