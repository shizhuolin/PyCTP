#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAASK45FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAASK45FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataAsk45Field {
    PyObject_HEAD
    CThostFtdcMarketDataAsk45Field data;
} PyCThostFtdcMarketDataAsk45Field;

extern PyTypeObject PyCThostFtdcMarketDataAsk45FieldType;

extern int PyCThostFtdcMarketDataAsk45FieldType_init(PyObject *module);

#endif
