#ifndef PYCTP_TYPES_PYCTHOSTFTDCFORCEUSERLOGOUTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFORCEUSERLOGOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///强制交易员退出

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcForceUserLogoutField data;
} PyCThostFtdcForceUserLogoutFieldData;

extern PyTypeObject *PyCThostFtdcForceUserLogoutFieldType;
extern int PyCTP_module_add_PyCThostFtdcForceUserLogoutFieldType_exec(PyObject *module);

#endif