#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeMarginRateField {
    PyObject_HEAD
    CThostFtdcExchangeMarginRateField data;
} PyCThostFtdcExchangeMarginRateField;

extern PyTypeObject PyCThostFtdcExchangeMarginRateFieldType;

extern int PyCThostFtdcExchangeMarginRateFieldType_init(PyObject *module);

#endif
