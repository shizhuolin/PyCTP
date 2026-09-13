#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组织架构投资者对应关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorDepartmentFlatField data;
} PyCThostFtdcQryInvestorDepartmentFlatFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorDepartmentFlatFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorDepartmentFlatFieldType_exec(PyObject *module);

#endif