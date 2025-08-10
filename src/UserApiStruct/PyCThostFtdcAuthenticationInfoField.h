#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHENTICATIONINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHENTICATIONINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证信息

typedef struct PyCThostFtdcAuthenticationInfoField {
    PyObject_HEAD
    CThostFtdcAuthenticationInfoField data;
} PyCThostFtdcAuthenticationInfoField;

extern PyTypeObject PyCThostFtdcAuthenticationInfoFieldType;

extern int PyCThostFtdcAuthenticationInfoFieldType_init(PyObject *module);

#endif
