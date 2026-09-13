#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS策略组合持仓

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSInvstCombPosField data;
} PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_exec(PyObject *module);

#endif