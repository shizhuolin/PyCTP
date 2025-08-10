#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM品种内对锁仓折扣参数

typedef struct PyCThostFtdcSyncDeltaSPBMIntraParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMIntraParameterField data;
} PyCThostFtdcSyncDeltaSPBMIntraParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(PyObject *module);

#endif
