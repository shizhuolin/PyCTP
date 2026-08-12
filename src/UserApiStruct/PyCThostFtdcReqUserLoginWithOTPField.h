#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出带动态验证码的登录请求请求

typedef struct PyCThostFtdcReqUserLoginWithOTPField {
    PyObject_HEAD
    CThostFtdcReqUserLoginWithOTPField data;
} PyCThostFtdcReqUserLoginWithOTPField;

extern PyTypeObject PyCThostFtdcReqUserLoginWithOTPFieldType;

extern int PyCThostFtdcReqUserLoginWithOTPFieldType_init(PyObject *module);

#endif
