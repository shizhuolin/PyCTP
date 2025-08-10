#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS跨品种风险折抵参数

typedef struct PyCThostFtdcSyncDeltaRCAMSInterParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSInterParameterField data;
} PyCThostFtdcSyncDeltaRCAMSInterParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(PyObject *module);

#endif
