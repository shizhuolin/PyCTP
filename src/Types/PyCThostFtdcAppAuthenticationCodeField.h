#ifndef PYCTP_TYPES_PYCTHOSTFTDCAPPAUTHENTICATIONCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAPPAUTHENTICATIONCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///App客户端认证码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAppAuthenticationCodeField data;
} PyCThostFtdcAppAuthenticationCodeFieldData;

extern PyTypeObject *PyCThostFtdcAppAuthenticationCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcAppAuthenticationCodeFieldType_exec(PyObject *module);

#endif