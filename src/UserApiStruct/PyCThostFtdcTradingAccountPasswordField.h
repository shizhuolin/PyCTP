#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令域

typedef struct PyCThostFtdcTradingAccountPasswordField {
    PyObject_HEAD
    CThostFtdcTradingAccountPasswordField data;
} PyCThostFtdcTradingAccountPasswordField;

extern PyTypeObject PyCThostFtdcTradingAccountPasswordFieldType;

extern int PyCThostFtdcTradingAccountPasswordFieldType_init(PyObject *module);

#endif
