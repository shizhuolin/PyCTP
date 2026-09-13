#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMFUTUREPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM期货合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMFutureParameterField data;
} PyCThostFtdcSyncDeltaSPBMFutureParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_exec(PyObject *module);

#endif