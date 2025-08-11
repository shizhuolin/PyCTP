#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCTRADINGACCOUNTKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCTRADINGACCOUNTKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCFMMCTradingAccountKeyField {
    PyObject_HEAD
    CThostFtdcQryCFMMCTradingAccountKeyField data;
} PyCThostFtdcQryCFMMCTradingAccountKeyField;

extern PyTypeObject PyCThostFtdcQryCFMMCTradingAccountKeyFieldType;

extern int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init(PyObject *module);

#endif
