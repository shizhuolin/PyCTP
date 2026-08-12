#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYCONFIGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///登录验证设置

typedef struct PyCThostFtdcSMSVerifyConfigField {
    PyObject_HEAD
    CThostFtdcSMSVerifyConfigField data;
} PyCThostFtdcSMSVerifyConfigField;

extern PyTypeObject PyCThostFtdcSMSVerifyConfigFieldType;

extern int PyCThostFtdcSMSVerifyConfigFieldType_init(PyObject *module);

#endif
