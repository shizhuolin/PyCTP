#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价

typedef struct PyCThostFtdcQuoteField {
    PyObject_HEAD
    CThostFtdcQuoteField data;
} PyCThostFtdcQuoteField;

extern PyTypeObject PyCThostFtdcQuoteFieldType;

extern int PyCThostFtdcQuoteFieldType_init(PyObject *module);

#endif
