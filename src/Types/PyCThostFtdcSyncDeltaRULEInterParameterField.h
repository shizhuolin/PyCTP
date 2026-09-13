#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRULEInterParameterField data;
} PyCThostFtdcSyncDeltaRULEInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRULEInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInterParameterFieldType_exec(PyObject *module);

#endif