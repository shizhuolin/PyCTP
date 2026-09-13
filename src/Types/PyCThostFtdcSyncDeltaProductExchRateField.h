#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平交叉汇率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaProductExchRateField data;
} PyCThostFtdcSyncDeltaProductExchRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaProductExchRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaProductExchRateFieldType_exec(PyObject *module);

#endif