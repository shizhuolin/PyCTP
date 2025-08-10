#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABESTPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABESTPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情最优价属性

typedef struct PyCThostFtdcMarketDataBestPriceField {
    PyObject_HEAD
    CThostFtdcMarketDataBestPriceField data;
} PyCThostFtdcMarketDataBestPriceField;

extern PyTypeObject PyCThostFtdcMarketDataBestPriceFieldType;

extern int PyCThostFtdcMarketDataBestPriceFieldType_init(PyObject *module);

#endif
