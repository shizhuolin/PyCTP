#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEFORQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeForQuoteField {
    PyObject_HEAD
    CThostFtdcQryExchangeForQuoteField data;
} PyCThostFtdcQryExchangeForQuoteField;

extern PyTypeObject PyCThostFtdcQryExchangeForQuoteFieldType;

extern int PyCThostFtdcQryExchangeForQuoteFieldType_init(PyObject *module);

#endif
