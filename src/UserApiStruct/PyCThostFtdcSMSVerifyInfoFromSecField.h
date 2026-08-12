#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYINFOFROMSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSMSVERIFYINFOFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///短信验证信息通知

typedef struct PyCThostFtdcSMSVerifyInfoFromSecField {
    PyObject_HEAD
    CThostFtdcSMSVerifyInfoFromSecField data;
} PyCThostFtdcSMSVerifyInfoFromSecField;

extern PyTypeObject PyCThostFtdcSMSVerifyInfoFromSecFieldType;

extern int PyCThostFtdcSMSVerifyInfoFromSecFieldType_init(PyObject *module);

#endif
