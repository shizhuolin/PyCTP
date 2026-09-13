#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算持仓查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRiskSettleInvstPositionField data;
} PyCThostFtdcQryRiskSettleInvstPositionFieldData;

extern PyTypeObject *PyCThostFtdcQryRiskSettleInvstPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRiskSettleInvstPositionFieldType_exec(PyObject *module);

#endif