#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS跨品种风险折抵参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSInterParameterField data;
} PyCThostFtdcSyncDeltaRCAMSInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_exec(PyObject *module);

#endif