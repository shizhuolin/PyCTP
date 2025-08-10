#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS空头期权风险调整参数

typedef struct PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField data;
} PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init(PyObject *module);

#endif
