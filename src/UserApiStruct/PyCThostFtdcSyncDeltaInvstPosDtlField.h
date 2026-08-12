#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平持仓明细

typedef struct PyCThostFtdcSyncDeltaInvstPosDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstPosDtlField data;
} PyCThostFtdcSyncDeltaInvstPosDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstPosDtlFieldType;

extern int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(PyObject *module);

#endif
