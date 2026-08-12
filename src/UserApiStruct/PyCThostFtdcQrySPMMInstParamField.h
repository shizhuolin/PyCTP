#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPMMINSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM合约参数查询

typedef struct PyCThostFtdcQrySPMMInstParamField {
    PyObject_HEAD
    CThostFtdcQrySPMMInstParamField data;
} PyCThostFtdcQrySPMMInstParamField;

extern PyTypeObject PyCThostFtdcQrySPMMInstParamFieldType;

extern int PyCThostFtdcQrySPMMInstParamFieldType_init(PyObject *module);

#endif
