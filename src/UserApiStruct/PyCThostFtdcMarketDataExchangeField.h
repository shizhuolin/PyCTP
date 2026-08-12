#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAEXCHANGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情交易所代码属性

typedef struct PyCThostFtdcMarketDataExchangeField {
    PyObject_HEAD
    CThostFtdcMarketDataExchangeField data;
} PyCThostFtdcMarketDataExchangeField;

extern PyTypeObject PyCThostFtdcMarketDataExchangeFieldType;

extern int PyCThostFtdcMarketDataExchangeFieldType_init(PyObject *module);

#endif
