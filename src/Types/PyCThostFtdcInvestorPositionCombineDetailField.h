#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPOSITIONCOMBINEDETAILFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPOSITIONCOMBINEDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者组合持仓明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorPositionCombineDetailField data;
} PyCThostFtdcInvestorPositionCombineDetailFieldData;

extern PyTypeObject *PyCThostFtdcInvestorPositionCombineDetailFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorPositionCombineDetailFieldType_exec(PyObject *module);

#endif