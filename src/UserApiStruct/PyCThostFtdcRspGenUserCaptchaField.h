#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENUSERCAPTCHAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENUSERCAPTCHAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///生成的图片验证码信息

typedef struct PyCThostFtdcRspGenUserCaptchaField {
    PyObject_HEAD
    CThostFtdcRspGenUserCaptchaField data;
} PyCThostFtdcRspGenUserCaptchaField;

extern PyTypeObject PyCThostFtdcRspGenUserCaptchaFieldType;

extern int PyCThostFtdcRspGenUserCaptchaFieldType_init(PyObject *module);

#endif
