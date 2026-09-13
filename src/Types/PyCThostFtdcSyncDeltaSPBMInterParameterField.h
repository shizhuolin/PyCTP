#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMInterParameterField data;
} PyCThostFtdcSyncDeltaSPBMInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_exec(PyObject *module);

#endif