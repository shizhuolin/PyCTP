#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM跨品种抵扣参数

typedef struct PyCThostFtdcSyncDeltaSPBMInterParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMInterParameterField data;
} PyCThostFtdcSyncDeltaSPBMInterParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMInterParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(PyObject *module);

#endif
