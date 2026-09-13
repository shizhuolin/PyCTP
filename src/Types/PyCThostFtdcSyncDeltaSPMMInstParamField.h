#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPMM合约参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPMMInstParamField data;
} PyCThostFtdcSyncDeltaSPMMInstParamFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPMMInstParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPMMInstParamFieldType_exec(PyObject *module);

#endif