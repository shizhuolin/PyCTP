#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeQuoteField {
    PyObject_HEAD
    CThostFtdcQryExchangeQuoteField data;
} PyCThostFtdcQryExchangeQuoteField;

extern PyTypeObject PyCThostFtdcQryExchangeQuoteFieldType;

extern int PyCThostFtdcQryExchangeQuoteFieldType_init(PyObject *module);

#endif
