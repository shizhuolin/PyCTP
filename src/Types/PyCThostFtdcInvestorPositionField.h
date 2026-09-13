#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPOSITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者持仓

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorPositionField data;
} PyCThostFtdcInvestorPositionFieldData;

extern PyTypeObject *PyCThostFtdcInvestorPositionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorPositionFieldType_exec(PyObject *module);

#endif