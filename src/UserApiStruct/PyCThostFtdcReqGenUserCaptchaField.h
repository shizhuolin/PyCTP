#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENUSERCAPTCHAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENUSERCAPTCHAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqGenUserCaptchaField {
    PyObject_HEAD
    CThostFtdcReqGenUserCaptchaField data;
} PyCThostFtdcReqGenUserCaptchaField;

extern PyTypeObject PyCThostFtdcReqGenUserCaptchaFieldType;

extern int PyCThostFtdcReqGenUserCaptchaFieldType_init(PyObject *module);

#endif
