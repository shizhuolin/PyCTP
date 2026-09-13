#ifndef PYCTP_TYPES_PYCTHOSTFTDCAUTHENTICATIONINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAUTHENTICATIONINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAuthenticationInfoField data;
} PyCThostFtdcAuthenticationInfoFieldData;

extern PyTypeObject *PyCThostFtdcAuthenticationInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcAuthenticationInfoFieldType_exec(PyObject *module);

#endif