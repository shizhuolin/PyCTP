#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///灾备中心交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserRightsAssignField data;
} PyCThostFtdcUserRightsAssignFieldData;

extern PyTypeObject *PyCThostFtdcUserRightsAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserRightsAssignFieldType_exec(PyObject *module);

#endif