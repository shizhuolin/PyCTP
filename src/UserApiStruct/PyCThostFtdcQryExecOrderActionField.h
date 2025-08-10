#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告操作查询

typedef struct PyCThostFtdcQryExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryExecOrderActionField data;
} PyCThostFtdcQryExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryExecOrderActionFieldType;

extern int PyCThostFtdcQryExecOrderActionFieldType_init(PyObject *module);

#endif
