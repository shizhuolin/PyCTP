#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORGROUPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者组

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorGroupField data;
} PyCThostFtdcInvestorGroupFieldData;

extern PyTypeObject *PyCThostFtdcInvestorGroupFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorGroupFieldType_exec(PyObject *module);

#endif