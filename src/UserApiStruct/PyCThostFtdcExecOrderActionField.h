#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告操作

typedef struct PyCThostFtdcExecOrderActionField {
    PyObject_HEAD
    CThostFtdcExecOrderActionField data;
} PyCThostFtdcExecOrderActionField;

extern PyTypeObject PyCThostFtdcExecOrderActionFieldType;

extern int PyCThostFtdcExecOrderActionFieldType_init(PyObject *module);

#endif
