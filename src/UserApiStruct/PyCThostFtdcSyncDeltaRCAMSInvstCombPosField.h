#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS策略组合持仓

typedef struct PyCThostFtdcSyncDeltaRCAMSInvstCombPosField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSInvstCombPosField data;
} PyCThostFtdcSyncDeltaRCAMSInvstCombPosField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(PyObject *module);

#endif
