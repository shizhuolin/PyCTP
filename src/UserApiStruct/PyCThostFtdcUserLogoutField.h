#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERLOGOUTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERLOGOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登出请求

typedef struct PyCThostFtdcUserLogoutField {
    PyObject_HEAD
    CThostFtdcUserLogoutField data;
} PyCThostFtdcUserLogoutField;

extern PyTypeObject PyCThostFtdcUserLogoutFieldType;

extern int PyCThostFtdcUserLogoutFieldType_init(PyObject *module);

#endif
