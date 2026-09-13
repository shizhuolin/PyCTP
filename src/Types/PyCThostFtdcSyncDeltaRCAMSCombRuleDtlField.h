#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS策略组合规则明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField data;
} PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_exec(PyObject *module);

#endif