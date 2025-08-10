#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPARTMENTUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPARTMENTUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///操作员组织架构关系

typedef struct PyCThostFtdcDepartmentUserField {
    PyObject_HEAD
    CThostFtdcDepartmentUserField data;
} PyCThostFtdcDepartmentUserField;

extern PyTypeObject PyCThostFtdcDepartmentUserFieldType;

extern int PyCThostFtdcDepartmentUserFieldType_init(PyObject *module);

#endif
