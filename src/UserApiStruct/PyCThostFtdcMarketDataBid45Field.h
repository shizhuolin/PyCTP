#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABID45FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABID45FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申买四、五属性

typedef struct PyCThostFtdcMarketDataBid45Field {
    PyObject_HEAD
    CThostFtdcMarketDataBid45Field data;
} PyCThostFtdcMarketDataBid45Field;

extern PyTypeObject PyCThostFtdcMarketDataBid45FieldType;

extern int PyCThostFtdcMarketDataBid45FieldType_init(PyObject *module);

#endif
