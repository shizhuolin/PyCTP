#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告

typedef struct PyCThostFtdcExecOrderField {
    PyObject_HEAD
    CThostFtdcExecOrderField data;
} PyCThostFtdcExecOrderField;

extern PyTypeObject PyCThostFtdcExecOrderFieldType;

extern int PyCThostFtdcExecOrderFieldType_init(PyObject *module);

#endif
