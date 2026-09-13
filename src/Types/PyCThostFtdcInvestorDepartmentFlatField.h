#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORDEPARTMENTFLATFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORDEPARTMENTFLATFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组织架构投资者对应关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorDepartmentFlatField data;
} PyCThostFtdcInvestorDepartmentFlatFieldData;

extern PyTypeObject *PyCThostFtdcInvestorDepartmentFlatFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorDepartmentFlatFieldType_exec(PyObject *module);

#endif