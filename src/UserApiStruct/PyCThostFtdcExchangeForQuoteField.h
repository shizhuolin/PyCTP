#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEFORQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所询价信息

typedef struct PyCThostFtdcExchangeForQuoteField {
    PyObject_HEAD
    CThostFtdcExchangeForQuoteField data;
} PyCThostFtdcExchangeForQuoteField;

extern PyTypeObject PyCThostFtdcExchangeForQuoteFieldType;

extern int PyCThostFtdcExchangeForQuoteFieldType_init(PyObject *module);

#endif
