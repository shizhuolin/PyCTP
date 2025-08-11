#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEQUOTEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeQuoteActionField {
    PyObject_HEAD
    CThostFtdcExchangeQuoteActionField data;
} PyCThostFtdcExchangeQuoteActionField;

extern PyTypeObject PyCThostFtdcExchangeQuoteActionFieldType;

extern int PyCThostFtdcExchangeQuoteActionFieldType_init(PyObject *module);

#endif
