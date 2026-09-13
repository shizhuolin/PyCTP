#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSINVESTORCOMBPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSINVESTORCOMBPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS策略组合持仓

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSInvestorCombPositionField data;
} PyCThostFtdcRCAMSInvestorCombPositionFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSInvestorCombPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSInvestorCombPositionFieldType_exec(PyObject *module);

#endif