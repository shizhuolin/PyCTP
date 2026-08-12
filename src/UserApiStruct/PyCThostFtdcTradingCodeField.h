#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易编码

typedef struct PyCThostFtdcTradingCodeField {
    PyObject_HEAD
    CThostFtdcTradingCodeField data;
} PyCThostFtdcTradingCodeField;

extern PyTypeObject PyCThostFtdcTradingCodeFieldType;

extern int PyCThostFtdcTradingCodeFieldType_init(PyObject *module);

#endif
