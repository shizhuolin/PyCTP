#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENSMSCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENSMSCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请短信验证码响应

typedef struct PyCThostFtdcRspGenSMSCodeField {
    PyObject_HEAD
    CThostFtdcRspGenSMSCodeField data;
} PyCThostFtdcRspGenSMSCodeField;

extern PyTypeObject PyCThostFtdcRspGenSMSCodeFieldType;

extern int PyCThostFtdcRspGenSMSCodeFieldType_init(PyObject *module);

#endif
