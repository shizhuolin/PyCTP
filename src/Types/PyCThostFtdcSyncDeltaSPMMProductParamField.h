#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPMM产品相关参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPMMProductParamField data;
} PyCThostFtdcSyncDeltaSPMMProductParamFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPMMProductParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMProductParamFieldType_exec(PyObject *module);

#endif