#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMORTGAGEPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMORTGAGEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///质押配比参数

typedef struct PyCThostFtdcMortgageParamField {
    PyObject_HEAD
    CThostFtdcMortgageParamField data;
} PyCThostFtdcMortgageParamField;

extern PyTypeObject PyCThostFtdcMortgageParamFieldType;

extern int PyCThostFtdcMortgageParamFieldType_init(PyObject *module);

#endif
