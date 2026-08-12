#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHCAPTCHAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHCAPTCHAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出带图形验证码的登录请求请求

typedef struct PyCThostFtdcReqUserLoginWithCaptchaField {
    PyObject_HEAD
    CThostFtdcReqUserLoginWithCaptchaField data;
} PyCThostFtdcReqUserLoginWithCaptchaField;

extern PyTypeObject PyCThostFtdcReqUserLoginWithCaptchaFieldType;

extern int PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(PyObject *module);

#endif
