#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平中金现货期权投资者保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaOptInvstMarginField data;
} PyCThostFtdcSyncDeltaOptInvstMarginFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaOptInvstMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaOptInvstMarginFieldType_exec(PyObject *module);

#endif