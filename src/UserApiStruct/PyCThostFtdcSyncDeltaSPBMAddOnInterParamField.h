#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM附加跨品种抵扣参数

typedef struct PyCThostFtdcSyncDeltaSPBMAddOnInterParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMAddOnInterParamField data;
} PyCThostFtdcSyncDeltaSPBMAddOnInterParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType;

extern int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init(PyObject *module);

#endif
