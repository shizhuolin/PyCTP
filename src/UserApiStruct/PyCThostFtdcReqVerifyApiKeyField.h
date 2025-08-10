#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///api给front的验证key的请求

typedef struct PyCThostFtdcReqVerifyApiKeyField {
    PyObject_HEAD
    CThostFtdcReqVerifyApiKeyField data;
} PyCThostFtdcReqVerifyApiKeyField;

extern PyTypeObject PyCThostFtdcReqVerifyApiKeyFieldType;

extern int PyCThostFtdcReqVerifyApiKeyFieldType_init(PyObject *module);

#endif
