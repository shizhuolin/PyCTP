#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERREXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERREXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误执行宣告操作

typedef struct PyCThostFtdcErrExecOrderActionField {
    PyObject_HEAD
    CThostFtdcErrExecOrderActionField data;
} PyCThostFtdcErrExecOrderActionField;

extern PyTypeObject PyCThostFtdcErrExecOrderActionFieldType;

extern int PyCThostFtdcErrExecOrderActionFieldType_init(PyObject *module);

#endif
