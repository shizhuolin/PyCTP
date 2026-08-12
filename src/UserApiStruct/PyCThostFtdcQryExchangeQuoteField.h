#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报价查询

typedef struct PyCThostFtdcQryExchangeQuoteField {
    PyObject_HEAD
    CThostFtdcQryExchangeQuoteField data;
} PyCThostFtdcQryExchangeQuoteField;

extern PyTypeObject PyCThostFtdcQryExchangeQuoteFieldType;

extern int PyCThostFtdcQryExchangeQuoteFieldType_init(PyObject *module);

#endif
