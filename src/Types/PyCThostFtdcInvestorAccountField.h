#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者账户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorAccountField data;
} PyCThostFtdcInvestorAccountFieldData;

extern PyTypeObject *PyCThostFtdcInvestorAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorAccountFieldType_exec(PyObject *module);

#endif