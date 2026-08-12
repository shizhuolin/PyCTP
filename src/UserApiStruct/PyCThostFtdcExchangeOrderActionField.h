#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报单操作

typedef struct PyCThostFtdcExchangeOrderActionField {
    PyObject_HEAD
    CThostFtdcExchangeOrderActionField data;
} PyCThostFtdcExchangeOrderActionField;

extern PyTypeObject PyCThostFtdcExchangeOrderActionFieldType;

extern int PyCThostFtdcExchangeOrderActionFieldType_init(PyObject *module);

#endif
