#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价

typedef struct PyCThostFtdcForQuoteField {
    PyObject_HEAD
    CThostFtdcForQuoteField data;
} PyCThostFtdcForQuoteField;

extern PyTypeObject PyCThostFtdcForQuoteFieldType;

extern int PyCThostFtdcForQuoteFieldType_init(PyObject *module);

#endif
