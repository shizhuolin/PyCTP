#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERREXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERREXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcErrExecOrderField {
    PyObject_HEAD
    CThostFtdcErrExecOrderField data;
} PyCThostFtdcErrExecOrderField;

extern PyTypeObject PyCThostFtdcErrExecOrderFieldType;

extern int PyCThostFtdcErrExecOrderFieldType_init(PyObject *module);

#endif
