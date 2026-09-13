#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERLOGOUTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERLOGOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登出请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserLogoutField data;
} PyCThostFtdcUserLogoutFieldData;

extern PyTypeObject *PyCThostFtdcUserLogoutFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserLogoutFieldType_exec(PyObject *module);

#endif