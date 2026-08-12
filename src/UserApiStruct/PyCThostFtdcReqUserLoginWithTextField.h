#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHTEXTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHTEXTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出带短信验证码的登录请求请求

typedef struct PyCThostFtdcReqUserLoginWithTextField {
    PyObject_HEAD
    CThostFtdcReqUserLoginWithTextField data;
} PyCThostFtdcReqUserLoginWithTextField;

extern PyTypeObject PyCThostFtdcReqUserLoginWithTextFieldType;

extern int PyCThostFtdcReqUserLoginWithTextFieldType_init(PyObject *module);

#endif
