#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONCOMBINEDETAILFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONCOMBINEDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合持仓明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorPositionCombineDetailField data;
} PyCThostFtdcQryInvestorPositionCombineDetailFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorPositionCombineDetailFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorPositionCombineDetailFieldType_exec(PyObject *module);

#endif