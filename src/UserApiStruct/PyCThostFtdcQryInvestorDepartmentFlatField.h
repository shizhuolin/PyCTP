#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组织架构投资者对应关系

typedef struct PyCThostFtdcQryInvestorDepartmentFlatField {
    PyObject_HEAD
    CThostFtdcQryInvestorDepartmentFlatField data;
} PyCThostFtdcQryInvestorDepartmentFlatField;

extern PyTypeObject PyCThostFtdcQryInvestorDepartmentFlatFieldType;

extern int PyCThostFtdcQryInvestorDepartmentFlatFieldType_init(PyObject *module);

#endif
