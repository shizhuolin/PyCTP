#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者持仓

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorPositionField data;
} PyCThostFtdcQryInvestorPositionFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorPositionFieldType_exec(PyObject *module);

#endif