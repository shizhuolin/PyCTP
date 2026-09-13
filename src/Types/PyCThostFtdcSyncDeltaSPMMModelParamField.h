#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMMODELPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMMODELPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPMM模板参数设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPMMModelParamField data;
} PyCThostFtdcSyncDeltaSPMMModelParamFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPMMModelParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMModelParamFieldType_exec(PyObject *module);

#endif