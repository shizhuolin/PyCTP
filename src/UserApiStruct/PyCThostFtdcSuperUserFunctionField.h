#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///管理用户功能权限

typedef struct PyCThostFtdcSuperUserFunctionField {
    PyObject_HEAD
    CThostFtdcSuperUserFunctionField data;
} PyCThostFtdcSuperUserFunctionField;

extern PyTypeObject PyCThostFtdcSuperUserFunctionFieldType;

extern int PyCThostFtdcSuperUserFunctionFieldType_init(PyObject *module);

#endif
