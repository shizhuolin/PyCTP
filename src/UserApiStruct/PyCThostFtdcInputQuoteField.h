#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInputQuoteField {
    PyObject_HEAD
    CThostFtdcInputQuoteField data;
} PyCThostFtdcInputQuoteField;

extern PyTypeObject PyCThostFtdcInputQuoteFieldType;

extern int PyCThostFtdcInputQuoteFieldType_init(PyObject *module);

#endif
