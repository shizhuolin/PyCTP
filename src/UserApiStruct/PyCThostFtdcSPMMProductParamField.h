#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPMMPRODUCTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM产品参数

typedef struct PyCThostFtdcSPMMProductParamField {
    PyObject_HEAD
    CThostFtdcSPMMProductParamField data;
} PyCThostFtdcSPMMProductParamField;

extern PyTypeObject PyCThostFtdcSPMMProductParamFieldType;

extern int PyCThostFtdcSPMMProductParamFieldType_init(PyObject *module);

#endif
