#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM附加跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMAddOnInterParamField data;
} PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_exec(PyObject *module);

#endif