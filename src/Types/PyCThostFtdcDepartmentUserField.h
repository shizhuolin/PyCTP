#ifndef PYCTP_TYPES_PYCTHOSTFTDCDEPARTMENTUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCDEPARTMENTUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///操作员组织架构关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcDepartmentUserField data;
} PyCThostFtdcDepartmentUserFieldData;

extern PyTypeObject *PyCThostFtdcDepartmentUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcDepartmentUserFieldType_exec(PyObject *module);

#endif