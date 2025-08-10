#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS策略组合规则明细

typedef struct PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField data;
} PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(PyObject *module);

#endif
