#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平组合持仓明细

typedef struct PyCThostFtdcSyncDeltaInvstPosCombDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstPosCombDtlField data;
} PyCThostFtdcSyncDeltaInvstPosCombDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType;

extern int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(PyObject *module);

#endif
