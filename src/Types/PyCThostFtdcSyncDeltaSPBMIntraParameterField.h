#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM品种内对锁仓折扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMIntraParameterField data;
} PyCThostFtdcSyncDeltaSPBMIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_exec(PyObject *module);

#endif