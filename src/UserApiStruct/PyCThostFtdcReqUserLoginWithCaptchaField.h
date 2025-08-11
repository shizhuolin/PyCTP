#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHCAPTCHAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHCAPTCHAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqUserLoginWithCaptchaField {
    PyObject_HEAD
    CThostFtdcReqUserLoginWithCaptchaField data;
} PyCThostFtdcReqUserLoginWithCaptchaField;

extern PyTypeObject PyCThostFtdcReqUserLoginWithCaptchaFieldType;

extern int PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(PyObject *module);

#endif
