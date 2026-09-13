#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者期货保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInvstMarginRateField data;
} PyCThostFtdcSyncDeltaInvstMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInvstMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstMarginRateFieldType_exec(PyObject *module);

#endif