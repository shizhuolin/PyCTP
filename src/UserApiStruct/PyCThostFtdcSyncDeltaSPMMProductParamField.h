#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPMM产品相关参数

typedef struct PyCThostFtdcSyncDeltaSPMMProductParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPMMProductParamField data;
} PyCThostFtdcSyncDeltaSPMMProductParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPMMProductParamFieldType;

extern int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(PyObject *module);

#endif
