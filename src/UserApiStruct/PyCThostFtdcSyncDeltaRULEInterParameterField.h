#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE跨品种抵扣参数

typedef struct PyCThostFtdcSyncDeltaRULEInterParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRULEInterParameterField data;
} PyCThostFtdcSyncDeltaRULEInterParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRULEInterParameterFieldType;

extern int PyCThostFtdcSyncDeltaRULEInterParameterFieldType_init(PyObject *module);

#endif
