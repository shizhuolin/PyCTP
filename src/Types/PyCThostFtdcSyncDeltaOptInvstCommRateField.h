#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAOPTINVSTCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAOPTINVSTCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平期权手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaOptInvstCommRateField data;
} PyCThostFtdcSyncDeltaOptInvstCommRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaOptInvstCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_exec(PyObject *module);

#endif