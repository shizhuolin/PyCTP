#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平期货手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInvstCommRateField data;
} PyCThostFtdcSyncDeltaInvstCommRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInvstCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstCommRateFieldType_exec(PyObject *module);

#endif