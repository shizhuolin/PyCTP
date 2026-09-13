#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorField data;
} PyCThostFtdcInvestorFieldData;

extern PyTypeObject *PyCThostFtdcInvestorFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorFieldType_exec(PyObject *module);

#endif