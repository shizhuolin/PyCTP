#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryExecOrderActionField data;
} PyCThostFtdcQryExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryExecOrderActionFieldType;

extern int PyCThostFtdcQryExecOrderActionFieldType_init(PyObject *module);

#endif
