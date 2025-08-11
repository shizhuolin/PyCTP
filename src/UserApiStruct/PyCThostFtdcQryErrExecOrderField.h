#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryErrExecOrderField {
    PyObject_HEAD
    CThostFtdcQryErrExecOrderField data;
} PyCThostFtdcQryErrExecOrderField;

extern PyTypeObject PyCThostFtdcQryErrExecOrderFieldType;

extern int PyCThostFtdcQryErrExecOrderFieldType_init(PyObject *module);

#endif
