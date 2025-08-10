#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOGINFORBIDDENUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOGINFORBIDDENUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询禁止登录用户

typedef struct PyCThostFtdcQryLoginForbiddenUserField {
    PyObject_HEAD
    CThostFtdcQryLoginForbiddenUserField data;
} PyCThostFtdcQryLoginForbiddenUserField;

extern PyTypeObject PyCThostFtdcQryLoginForbiddenUserFieldType;

extern int PyCThostFtdcQryLoginForbiddenUserFieldType_init(PyObject *module);

#endif
