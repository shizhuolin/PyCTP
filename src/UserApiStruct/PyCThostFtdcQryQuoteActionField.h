#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYQUOTEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价操作查询

typedef struct PyCThostFtdcQryQuoteActionField {
    PyObject_HEAD
    CThostFtdcQryQuoteActionField data;
} PyCThostFtdcQryQuoteActionField;

extern PyTypeObject PyCThostFtdcQryQuoteActionFieldType;

extern int PyCThostFtdcQryQuoteActionFieldType_init(PyObject *module);

#endif
