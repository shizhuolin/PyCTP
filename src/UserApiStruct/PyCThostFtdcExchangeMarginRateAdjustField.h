#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEADJUSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEMARGINRATEADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeMarginRateAdjustField {
    PyObject_HEAD
    CThostFtdcExchangeMarginRateAdjustField data;
} PyCThostFtdcExchangeMarginRateAdjustField;

extern PyTypeObject PyCThostFtdcExchangeMarginRateAdjustFieldType;

extern int PyCThostFtdcExchangeMarginRateAdjustFieldType_init(PyObject *module);

#endif
