#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGINFORBIDDENIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGINFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止登录IP

typedef struct PyCThostFtdcLoginForbiddenIPField {
    PyObject_HEAD
    CThostFtdcLoginForbiddenIPField data;
} PyCThostFtdcLoginForbiddenIPField;

extern PyTypeObject PyCThostFtdcLoginForbiddenIPFieldType;

extern int PyCThostFtdcLoginForbiddenIPFieldType_init(PyObject *module);

#endif
