#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTEPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价价差参数

typedef struct PyCThostFtdcForQuoteParamField {
    PyObject_HEAD
    CThostFtdcForQuoteParamField data;
} PyCThostFtdcForQuoteParamField;

extern PyTypeObject PyCThostFtdcForQuoteParamFieldType;

extern int PyCThostFtdcForQuoteParamFieldType_init(PyObject *module);

#endif
