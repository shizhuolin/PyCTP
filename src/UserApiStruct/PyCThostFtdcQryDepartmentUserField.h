#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询操作员组织架构关系

typedef struct PyCThostFtdcQryDepartmentUserField {
    PyObject_HEAD
    CThostFtdcQryDepartmentUserField data;
} PyCThostFtdcQryDepartmentUserField;

extern PyTypeObject PyCThostFtdcQryDepartmentUserFieldType;

extern int PyCThostFtdcQryDepartmentUserFieldType_init(PyObject *module);

#endif
