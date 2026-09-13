#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE品种内对锁仓折扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRULEIntraParameterField data;
} PyCThostFtdcSyncDeltaRULEIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRULEIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_exec(PyObject *module);

#endif