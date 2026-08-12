#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报价信息

typedef struct PyCThostFtdcExchangeQuoteField {
    PyObject_HEAD
    CThostFtdcExchangeQuoteField data;
} PyCThostFtdcExchangeQuoteField;

extern PyTypeObject PyCThostFtdcExchangeQuoteFieldType;

extern int PyCThostFtdcExchangeQuoteFieldType_init(PyObject *module);

#endif
