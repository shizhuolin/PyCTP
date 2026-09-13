#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平持仓明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInvstPosDtlField data;
} PyCThostFtdcSyncDeltaInvstPosDtlFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInvstPosDtlFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosDtlFieldType_exec(PyObject *module);

#endif