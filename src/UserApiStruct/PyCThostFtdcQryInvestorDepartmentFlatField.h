#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORDEPARTMENTFLATFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorDepartmentFlatField {
    PyObject_HEAD
    CThostFtdcQryInvestorDepartmentFlatField data;
} PyCThostFtdcQryInvestorDepartmentFlatField;

extern PyTypeObject PyCThostFtdcQryInvestorDepartmentFlatFieldType;

extern int PyCThostFtdcQryInvestorDepartmentFlatFieldType_init(PyObject *module);

#endif
