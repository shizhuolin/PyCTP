#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTFORQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的询价

typedef struct PyCThostFtdcInputForQuoteField {
    PyObject_HEAD
    CThostFtdcInputForQuoteField data;
} PyCThostFtdcInputForQuoteField;

extern PyTypeObject PyCThostFtdcInputForQuoteFieldType;

extern int PyCThostFtdcInputForQuoteFieldType_init(PyObject *module);

#endif
