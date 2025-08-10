#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPMMINSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM合约参数

typedef struct PyCThostFtdcSPMMInstParamField {
    PyObject_HEAD
    CThostFtdcSPMMInstParamField data;
} PyCThostFtdcSPMMInstParamField;

extern PyTypeObject PyCThostFtdcSPMMInstParamFieldType;

extern int PyCThostFtdcSPMMInstParamFieldType_init(PyObject *module);

#endif
