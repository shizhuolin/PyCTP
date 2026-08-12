#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所保证金率

typedef struct PyCThostFtdcExchangeMarginRateField {
    PyObject_HEAD
    CThostFtdcExchangeMarginRateField data;
} PyCThostFtdcExchangeMarginRateField;

extern PyTypeObject PyCThostFtdcExchangeMarginRateFieldType;

extern int PyCThostFtdcExchangeMarginRateFieldType_init(PyObject *module);

#endif
