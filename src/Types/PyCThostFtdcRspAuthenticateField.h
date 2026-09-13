#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPAUTHENTICATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPAUTHENTICATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspAuthenticateField data;
} PyCThostFtdcRspAuthenticateFieldData;

extern PyTypeObject *PyCThostFtdcRspAuthenticateFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspAuthenticateFieldType_exec(PyObject *module);

#endif