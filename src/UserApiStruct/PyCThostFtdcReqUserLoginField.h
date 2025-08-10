#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登录请求

typedef struct PyCThostFtdcReqUserLoginField {
    PyObject_HEAD
    CThostFtdcReqUserLoginField data;
} PyCThostFtdcReqUserLoginField;

extern PyTypeObject PyCThostFtdcReqUserLoginFieldType;

extern int PyCThostFtdcReqUserLoginFieldType_init(PyObject *module);

#endif
