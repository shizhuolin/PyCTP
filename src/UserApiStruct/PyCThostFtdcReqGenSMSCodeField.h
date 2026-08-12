#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENSMSCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENSMSCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请短信验证码请求

typedef struct PyCThostFtdcReqGenSMSCodeField {
    PyObject_HEAD
    CThostFtdcReqGenSMSCodeField data;
} PyCThostFtdcReqGenSMSCodeField;

extern PyTypeObject PyCThostFtdcReqGenSMSCodeFieldType;

extern int PyCThostFtdcReqGenSMSCodeFieldType_init(PyObject *module);

#endif
