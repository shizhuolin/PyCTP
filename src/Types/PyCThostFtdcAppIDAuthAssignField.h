#ifndef PYCTP_TYPES_PYCTHOSTFTDCAPPIDAUTHASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAPPIDAUTHASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///App客户端权限分配

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAppIDAuthAssignField data;
} PyCThostFtdcAppIDAuthAssignFieldData;

extern PyTypeObject *PyCThostFtdcAppIDAuthAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcAppIDAuthAssignFieldType_exec(PyObject *module);

#endif