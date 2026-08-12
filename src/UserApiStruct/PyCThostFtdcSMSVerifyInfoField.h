#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///短信验证信息通知

typedef struct PyCThostFtdcSMSVerifyInfoField {
    PyObject_HEAD
    CThostFtdcSMSVerifyInfoField data;
} PyCThostFtdcSMSVerifyInfoField;

extern PyTypeObject PyCThostFtdcSMSVerifyInfoFieldType;

extern int PyCThostFtdcSMSVerifyInfoFieldType_init(PyObject *module);

#endif
