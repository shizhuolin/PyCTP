#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqUserLoginWithOTPField {
    PyObject_HEAD
    CThostFtdcReqUserLoginWithOTPField data;
} PyCThostFtdcReqUserLoginWithOTPField;

extern PyTypeObject PyCThostFtdcReqUserLoginWithOTPFieldType;

extern int PyCThostFtdcReqUserLoginWithOTPFieldType_init(PyObject *module);

#endif
