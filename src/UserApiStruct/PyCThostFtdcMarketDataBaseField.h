#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABASEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATABASEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataBaseField {
    PyObject_HEAD
    CThostFtdcMarketDataBaseField data;
} PyCThostFtdcMarketDataBaseField;

extern PyTypeObject PyCThostFtdcMarketDataBaseFieldType;

extern int PyCThostFtdcMarketDataBaseFieldType_init(PyObject *module);

#endif
