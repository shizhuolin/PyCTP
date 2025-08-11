#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGETRADEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGETRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeTradeField {
    PyObject_HEAD
    CThostFtdcExchangeTradeField data;
} PyCThostFtdcExchangeTradeField;

extern PyTypeObject PyCThostFtdcExchangeTradeFieldType;

extern int PyCThostFtdcExchangeTradeFieldType_init(PyObject *module);

#endif
