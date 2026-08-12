#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTHOSTUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTHOSTUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///Thost终端用户功能权限查询

typedef struct PyCThostFtdcQryThostUserFunctionField {
    PyObject_HEAD
    CThostFtdcQryThostUserFunctionField data;
} PyCThostFtdcQryThostUserFunctionField;

extern PyTypeObject PyCThostFtdcQryThostUserFunctionFieldType;

extern int PyCThostFtdcQryThostUserFunctionFieldType_init(PyObject *module);

#endif
