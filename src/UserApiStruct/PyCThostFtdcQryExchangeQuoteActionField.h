#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeQuoteActionField {
    PyObject_HEAD
    CThostFtdcQryExchangeQuoteActionField data;
} PyCThostFtdcQryExchangeQuoteActionField;

extern PyTypeObject PyCThostFtdcQryExchangeQuoteActionFieldType;

extern int PyCThostFtdcQryExchangeQuoteActionFieldType_init(PyObject *module);

#endif
