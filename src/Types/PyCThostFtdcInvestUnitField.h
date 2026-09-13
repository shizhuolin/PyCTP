#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTUNITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTUNITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资单元

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestUnitField data;
} PyCThostFtdcInvestUnitFieldData;

extern PyTypeObject *PyCThostFtdcInvestUnitFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestUnitFieldType_exec(PyObject *module);

#endif