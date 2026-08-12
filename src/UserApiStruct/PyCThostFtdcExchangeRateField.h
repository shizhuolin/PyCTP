#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGERATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGERATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///汇率

typedef struct PyCThostFtdcExchangeRateField {
    PyObject_HEAD
    CThostFtdcExchangeRateField data;
} PyCThostFtdcExchangeRateField;

extern PyTypeObject PyCThostFtdcExchangeRateFieldType;

extern int PyCThostFtdcExchangeRateFieldType_init(PyObject *module);

#endif
