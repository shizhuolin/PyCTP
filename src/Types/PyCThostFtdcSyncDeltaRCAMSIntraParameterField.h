#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS品种内风险对冲参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSIntraParameterField data;
} PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_exec(PyObject *module);

#endif