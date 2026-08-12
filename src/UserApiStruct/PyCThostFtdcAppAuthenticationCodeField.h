#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAPPAUTHENTICATIONCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAPPAUTHENTICATIONCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///App客户端认证码

typedef struct PyCThostFtdcAppAuthenticationCodeField {
    PyObject_HEAD
    CThostFtdcAppAuthenticationCodeField data;
} PyCThostFtdcAppAuthenticationCodeField;

extern PyTypeObject PyCThostFtdcAppAuthenticationCodeFieldType;

extern int PyCThostFtdcAppAuthenticationCodeFieldType_init(PyObject *module);

#endif
