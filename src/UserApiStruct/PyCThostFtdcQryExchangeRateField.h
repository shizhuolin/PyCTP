#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGERATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGERATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询汇率

typedef struct PyCThostFtdcQryExchangeRateField {
    PyObject_HEAD
    CThostFtdcQryExchangeRateField data;
} PyCThostFtdcQryExchangeRateField;

extern PyTypeObject PyCThostFtdcQryExchangeRateFieldType;

extern int PyCThostFtdcQryExchangeRateFieldType_init(PyObject *module);

#endif
