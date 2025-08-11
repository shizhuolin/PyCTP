#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExecOrderField {
    PyObject_HEAD
    CThostFtdcQryExecOrderField data;
} PyCThostFtdcQryExecOrderField;

extern PyTypeObject PyCThostFtdcQryExecOrderFieldType;

extern int PyCThostFtdcQryExecOrderFieldType_init(PyObject *module);

#endif
