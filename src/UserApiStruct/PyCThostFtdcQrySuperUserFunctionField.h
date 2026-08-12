#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询管理用户功能权限

typedef struct PyCThostFtdcQrySuperUserFunctionField {
    PyObject_HEAD
    CThostFtdcQrySuperUserFunctionField data;
} PyCThostFtdcQrySuperUserFunctionField;

extern PyTypeObject PyCThostFtdcQrySuperUserFunctionFieldType;

extern int PyCThostFtdcQrySuperUserFunctionFieldType_init(PyObject *module);

#endif
