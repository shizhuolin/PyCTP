#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqAuthenticateField data;
} PyCThostFtdcReqAuthenticateFieldData;

extern PyTypeObject *PyCThostFtdcReqAuthenticateFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqAuthenticateFieldType_exec(PyObject *module);

#endif