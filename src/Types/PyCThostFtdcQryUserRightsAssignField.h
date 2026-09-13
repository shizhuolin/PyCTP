#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYUSERRIGHTSASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYUSERRIGHTSASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询用户下单权限分配表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryUserRightsAssignField data;
} PyCThostFtdcQryUserRightsAssignFieldData;

extern PyTypeObject *PyCThostFtdcQryUserRightsAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryUserRightsAssignFieldType_exec(PyObject *module);

#endif