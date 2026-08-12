#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPMM合约参数

typedef struct PyCThostFtdcSyncDeltaSPMMInstParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPMMInstParamField data;
} PyCThostFtdcSyncDeltaSPMMInstParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPMMInstParamFieldType;

extern int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(PyObject *module);

#endif
