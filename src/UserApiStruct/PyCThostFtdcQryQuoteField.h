#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价查询

typedef struct PyCThostFtdcQryQuoteField {
    PyObject_HEAD
    CThostFtdcQryQuoteField data;
} PyCThostFtdcQryQuoteField;

extern PyTypeObject PyCThostFtdcQryQuoteFieldType;

extern int PyCThostFtdcQryQuoteFieldType_init(PyObject *module);

#endif
