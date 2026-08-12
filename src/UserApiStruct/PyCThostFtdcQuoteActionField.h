#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUOTEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价操作

typedef struct PyCThostFtdcQuoteActionField {
    PyObject_HEAD
    CThostFtdcQuoteActionField data;
} PyCThostFtdcQuoteActionField;

extern PyTypeObject PyCThostFtdcQuoteActionFieldType;

extern int PyCThostFtdcQuoteActionFieldType_init(PyObject *module);

#endif
