#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证请求

typedef struct PyCThostFtdcReqAuthenticateField {
    PyObject_HEAD
    CThostFtdcReqAuthenticateField data;
} PyCThostFtdcReqAuthenticateField;

extern PyTypeObject PyCThostFtdcReqAuthenticateFieldType;

extern int PyCThostFtdcReqAuthenticateFieldType_init(PyObject *module);

#endif
