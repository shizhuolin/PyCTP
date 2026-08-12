#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTQUOTEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报价操作

typedef struct PyCThostFtdcInputQuoteActionField {
    PyObject_HEAD
    CThostFtdcInputQuoteActionField data;
} PyCThostFtdcInputQuoteActionField;

extern PyTypeObject PyCThostFtdcInputQuoteActionFieldType;

extern int PyCThostFtdcInputQuoteActionFieldType_init(PyObject *module);

#endif
