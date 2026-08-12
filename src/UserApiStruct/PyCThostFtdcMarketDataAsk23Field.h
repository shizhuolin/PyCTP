#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAASK23FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAASK23FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申卖二、三属性

typedef struct PyCThostFtdcMarketDataAsk23Field {
    PyObject_HEAD
    CThostFtdcMarketDataAsk23Field data;
} PyCThostFtdcMarketDataAsk23Field;

extern PyTypeObject PyCThostFtdcMarketDataAsk23FieldType;

extern int PyCThostFtdcMarketDataAsk23FieldType_init(PyObject *module);

#endif
