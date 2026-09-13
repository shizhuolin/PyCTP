#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者持仓明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorPositionDetailField data;
} PyCThostFtdcQryInvestorPositionDetailFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorPositionDetailFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorPositionDetailFieldType_exec(PyObject *module);

#endif