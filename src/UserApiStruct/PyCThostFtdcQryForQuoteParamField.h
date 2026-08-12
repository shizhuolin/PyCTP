#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFORQUOTEPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFORQUOTEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询询价价差参数

typedef struct PyCThostFtdcQryForQuoteParamField {
    PyObject_HEAD
    CThostFtdcQryForQuoteParamField data;
} PyCThostFtdcQryForQuoteParamField;

extern PyTypeObject PyCThostFtdcQryForQuoteParamFieldType;

extern int PyCThostFtdcQryForQuoteParamFieldType_init(PyObject *module);

#endif
