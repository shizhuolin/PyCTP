#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENUSERTEXTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQGENUSERTEXTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出获取安全安全登陆方法请求

typedef struct PyCThostFtdcReqGenUserTextField {
    PyObject_HEAD
    CThostFtdcReqGenUserTextField data;
} PyCThostFtdcReqGenUserTextField;

extern PyTypeObject PyCThostFtdcReqGenUserTextFieldType;

extern int PyCThostFtdcReqGenUserTextFieldType_init(PyObject *module);

#endif
