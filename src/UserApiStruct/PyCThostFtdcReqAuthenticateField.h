#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAUTHENTICATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqAuthenticateField {
    PyObject_HEAD
    CThostFtdcReqAuthenticateField data;
} PyCThostFtdcReqAuthenticateField;

extern PyTypeObject PyCThostFtdcReqAuthenticateFieldType;

extern int PyCThostFtdcReqAuthenticateFieldType_init(PyObject *module);

#endif
