#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINSMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINSMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///国密用户登录请求

typedef struct PyCThostFtdcReqUserLoginSMField {
    PyObject_HEAD
    CThostFtdcReqUserLoginSMField data;
} PyCThostFtdcReqUserLoginSMField;

extern PyTypeObject PyCThostFtdcReqUserLoginSMFieldType;

extern int PyCThostFtdcReqUserLoginSMFieldType_init(PyObject *module);

#endif
