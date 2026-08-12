#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFORQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价查询

typedef struct PyCThostFtdcQryForQuoteField {
    PyObject_HEAD
    CThostFtdcQryForQuoteField data;
} PyCThostFtdcQryForQuoteField;

extern PyTypeObject PyCThostFtdcQryForQuoteFieldType;

extern int PyCThostFtdcQryForQuoteFieldType_init(PyObject *module);

#endif
