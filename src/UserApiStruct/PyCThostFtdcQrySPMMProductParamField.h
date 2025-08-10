#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPMMPRODUCTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM产品参数查询

typedef struct PyCThostFtdcQrySPMMProductParamField {
    PyObject_HEAD
    CThostFtdcQrySPMMProductParamField data;
} PyCThostFtdcQrySPMMProductParamField;

extern PyTypeObject PyCThostFtdcQrySPMMProductParamFieldType;

extern int PyCThostFtdcQrySPMMProductParamFieldType_init(PyObject *module);

#endif
