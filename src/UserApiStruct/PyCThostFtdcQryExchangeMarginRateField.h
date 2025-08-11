#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeMarginRateField {
    PyObject_HEAD
    CThostFtdcQryExchangeMarginRateField data;
} PyCThostFtdcQryExchangeMarginRateField;

extern PyTypeObject PyCThostFtdcQryExchangeMarginRateFieldType;

extern int PyCThostFtdcQryExchangeMarginRateFieldType_init(PyObject *module);

#endif
