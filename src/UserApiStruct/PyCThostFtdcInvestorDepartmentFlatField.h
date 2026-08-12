#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORDEPARTMENTFLATFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORDEPARTMENTFLATFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组织架构投资者对应关系

typedef struct PyCThostFtdcInvestorDepartmentFlatField {
    PyObject_HEAD
    CThostFtdcInvestorDepartmentFlatField data;
} PyCThostFtdcInvestorDepartmentFlatField;

extern PyTypeObject PyCThostFtdcInvestorDepartmentFlatFieldType;

extern int PyCThostFtdcInvestorDepartmentFlatFieldType_init(PyObject *module);

#endif
