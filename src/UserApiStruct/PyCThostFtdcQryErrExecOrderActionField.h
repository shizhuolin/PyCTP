#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryErrExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryErrExecOrderActionField data;
} PyCThostFtdcQryErrExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryErrExecOrderActionFieldType;

extern int PyCThostFtdcQryErrExecOrderActionFieldType_init(PyObject *module);

#endif
