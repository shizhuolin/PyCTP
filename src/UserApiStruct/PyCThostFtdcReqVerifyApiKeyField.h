#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqVerifyApiKeyField {
    PyObject_HEAD
    CThostFtdcReqVerifyApiKeyField data;
} PyCThostFtdcReqVerifyApiKeyField;

extern PyTypeObject PyCThostFtdcReqVerifyApiKeyFieldType;

extern int PyCThostFtdcReqVerifyApiKeyFieldType_init(PyObject *module);

#endif
