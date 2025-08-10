#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///市场行情

typedef struct PyCThostFtdcMarketDataField {
    PyObject_HEAD
    CThostFtdcMarketDataField data;
} PyCThostFtdcMarketDataField;

extern PyTypeObject PyCThostFtdcMarketDataFieldType;

extern int PyCThostFtdcMarketDataFieldType_init(PyObject *module);

#endif
