#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE品种内对锁仓折扣参数

typedef struct PyCThostFtdcSyncDeltaRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRULEIntraParameterField data;
} PyCThostFtdcSyncDeltaRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRULEIntraParameterFieldType;

extern int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(PyObject *module);

#endif
