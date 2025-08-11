#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABID23FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABID23FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataBid23Field {
    PyObject_HEAD
    CThostFtdcMarketDataBid23Field data;
} PyCThostFtdcMarketDataBid23Field;

extern PyTypeObject PyCThostFtdcMarketDataBid23FieldType;

extern int PyCThostFtdcMarketDataBid23FieldType_init(PyObject *module);

#endif
