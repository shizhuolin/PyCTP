#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGINFORBIDDENUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGINFORBIDDENUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止登录用户

typedef struct PyCThostFtdcLoginForbiddenUserField {
    PyObject_HEAD
    CThostFtdcLoginForbiddenUserField data;
} PyCThostFtdcLoginForbiddenUserField;

extern PyTypeObject PyCThostFtdcLoginForbiddenUserFieldType;

extern int PyCThostFtdcLoginForbiddenUserFieldType_init(PyObject *module);

#endif
