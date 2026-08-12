#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSEROTPPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSEROTPPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户动态令牌参数

typedef struct PyCThostFtdcBrokerUserOTPParamField {
    PyObject_HEAD
    CThostFtdcBrokerUserOTPParamField data;
} PyCThostFtdcBrokerUserOTPParamField;

extern PyTypeObject PyCThostFtdcBrokerUserOTPParamFieldType;

extern int PyCThostFtdcBrokerUserOTPParamFieldType_init(PyObject *module);

#endif
