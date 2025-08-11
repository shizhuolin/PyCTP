#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTTOKENFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTTOKENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCFMMCTradingAccountTokenField {
    PyObject_HEAD
    CThostFtdcCFMMCTradingAccountTokenField data;
} PyCThostFtdcCFMMCTradingAccountTokenField;

extern PyTypeObject PyCThostFtdcCFMMCTradingAccountTokenFieldType;

extern int PyCThostFtdcCFMMCTradingAccountTokenFieldType_init(PyObject *module);

#endif
