#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAAVERAGEPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAAVERAGEPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataAveragePriceField {
    PyObject_HEAD
    CThostFtdcMarketDataAveragePriceField data;
} PyCThostFtdcMarketDataAveragePriceField;

extern PyTypeObject PyCThostFtdcMarketDataAveragePriceFieldType;

extern int PyCThostFtdcMarketDataAveragePriceFieldType_init(PyObject *module);

#endif
