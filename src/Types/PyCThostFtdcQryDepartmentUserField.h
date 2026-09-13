#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYDEPARTMENTUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询操作员组织架构关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryDepartmentUserField data;
} PyCThostFtdcQryDepartmentUserFieldData;

extern PyTypeObject *PyCThostFtdcQryDepartmentUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryDepartmentUserFieldType_exec(PyObject *module);

#endif