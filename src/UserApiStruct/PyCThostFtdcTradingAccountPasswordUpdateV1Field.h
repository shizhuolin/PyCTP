#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEV1FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEV1FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令变更域

typedef struct PyCThostFtdcTradingAccountPasswordUpdateV1Field {
    PyObject_HEAD
    CThostFtdcTradingAccountPasswordUpdateV1Field data;
} PyCThostFtdcTradingAccountPasswordUpdateV1Field;

extern PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateV1FieldType;

extern int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init(PyObject *module);

#endif
