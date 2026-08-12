#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误执行宣告操作

typedef struct PyCThostFtdcQryErrExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryErrExecOrderActionField data;
} PyCThostFtdcQryErrExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryErrExecOrderActionFieldType;

extern int PyCThostFtdcQryErrExecOrderActionFieldType_init(PyObject *module);

#endif
