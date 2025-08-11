#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCFMMCTradingAccountKeyField {
    PyObject_HEAD
    CThostFtdcCFMMCTradingAccountKeyField data;
} PyCThostFtdcCFMMCTradingAccountKeyField;

extern PyTypeObject PyCThostFtdcCFMMCTradingAccountKeyFieldType;

extern int PyCThostFtdcCFMMCTradingAccountKeyFieldType_init(PyObject *module);

#endif
