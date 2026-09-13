#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINVESTORCOMBPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINVESTORCOMBPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS策略组合持仓查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSInvestorCombPositionField data;
} PyCThostFtdcQryRCAMSInvestorCombPositionFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSInvestorCombPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_exec(PyObject *module);

#endif