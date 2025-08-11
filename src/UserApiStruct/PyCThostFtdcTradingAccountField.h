#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTradingAccountField {
    PyObject_HEAD
    CThostFtdcTradingAccountField data;
} PyCThostFtdcTradingAccountField;

extern PyTypeObject PyCThostFtdcTradingAccountFieldType;

extern int PyCThostFtdcTradingAccountFieldType_init(PyObject *module);

#endif
