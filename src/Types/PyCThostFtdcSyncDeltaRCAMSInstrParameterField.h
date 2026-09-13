#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS同合约风险对冲参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSInstrParameterField data;
} PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_exec(PyObject *module);

#endif