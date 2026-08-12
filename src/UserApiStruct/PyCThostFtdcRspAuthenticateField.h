#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAUTHENTICATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAUTHENTICATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户端认证响应

typedef struct PyCThostFtdcRspAuthenticateField {
    PyObject_HEAD
    CThostFtdcRspAuthenticateField data;
} PyCThostFtdcRspAuthenticateField;

extern PyTypeObject PyCThostFtdcRspAuthenticateFieldType;

extern int PyCThostFtdcRspAuthenticateFieldType_init(PyObject *module);

#endif
