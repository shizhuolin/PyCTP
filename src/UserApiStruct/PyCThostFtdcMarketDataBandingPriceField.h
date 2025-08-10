#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情上下带价

typedef struct PyCThostFtdcMarketDataBandingPriceField {
    PyObject_HEAD
    CThostFtdcMarketDataBandingPriceField data;
} PyCThostFtdcMarketDataBandingPriceField;

extern PyTypeObject PyCThostFtdcMarketDataBandingPriceFieldType;

extern int PyCThostFtdcMarketDataBandingPriceFieldType_init(PyObject *module);

#endif
