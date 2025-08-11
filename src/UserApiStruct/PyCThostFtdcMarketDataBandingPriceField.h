#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataBandingPriceField {
    PyObject_HEAD
    CThostFtdcMarketDataBandingPriceField data;
} PyCThostFtdcMarketDataBandingPriceField;

extern PyTypeObject PyCThostFtdcMarketDataBandingPriceFieldType;

extern int PyCThostFtdcMarketDataBandingPriceFieldType_init(PyObject *module);

#endif
