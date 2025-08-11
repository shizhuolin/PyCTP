#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryDepartmentUserField {
    PyObject_HEAD
    CThostFtdcQryDepartmentUserField data;
} PyCThostFtdcQryDepartmentUserField;

extern PyTypeObject PyCThostFtdcQryDepartmentUserFieldType;

extern int PyCThostFtdcQryDepartmentUserFieldType_init(PyObject *module);

#endif
