#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExecOrderActionField {
    PyObject_HEAD
    CThostFtdcExecOrderActionField data;
} PyCThostFtdcExecOrderActionField;

extern PyTypeObject PyCThostFtdcExecOrderActionFieldType;

extern int PyCThostFtdcExecOrderActionFieldType_init(PyObject *module);

#endif
