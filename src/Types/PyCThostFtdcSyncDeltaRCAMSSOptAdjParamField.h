#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS空头期权风险调整参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField data;
} PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_exec(PyObject *module);

#endif