#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平组合持仓明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInvstPosCombDtlField data;
} PyCThostFtdcSyncDeltaInvstPosCombDtlFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_exec(PyObject *module);

#endif