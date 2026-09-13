#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平交易所期货保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaExchMarginRateField data;
} PyCThostFtdcSyncDeltaExchMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaExchMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaExchMarginRateFieldType_exec(PyObject *module);

#endif