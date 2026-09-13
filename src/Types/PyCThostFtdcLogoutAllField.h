#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOGOUTALLFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOGOUTALLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///登录信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLogoutAllField data;
} PyCThostFtdcLogoutAllFieldData;

extern PyTypeObject *PyCThostFtdcLogoutAllFieldType;
extern int PyCTP_module_add_PyCThostFtdcLogoutAllFieldType_exec(PyObject *module);

#endif