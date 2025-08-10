#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEADJUSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所调整保证金率

typedef struct PyCThostFtdcQryExchangeMarginRateAdjustField {
    PyObject_HEAD
    CThostFtdcQryExchangeMarginRateAdjustField data;
} PyCThostFtdcQryExchangeMarginRateAdjustField;

extern PyTypeObject PyCThostFtdcQryExchangeMarginRateAdjustFieldType;

extern int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init(PyObject *module);

#endif
