#ifndef PYCTP_TYPES_PYCTHOSTFTDCRISKSETTLEINVSTPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRISKSETTLEINVSTPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算持仓

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRiskSettleInvstPositionField data;
} PyCThostFtdcRiskSettleInvstPositionFieldData;

extern PyTypeObject *PyCThostFtdcRiskSettleInvstPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcRiskSettleInvstPositionFieldType_exec(PyObject *module);

#endif