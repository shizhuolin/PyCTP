#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRULEInstrParameterField data;
} PyCThostFtdcSyncDeltaRULEInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRULEInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_exec(PyObject *module);

#endif