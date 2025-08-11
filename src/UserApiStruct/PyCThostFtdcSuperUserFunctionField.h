#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSuperUserFunctionField {
    PyObject_HEAD
    CThostFtdcSuperUserFunctionField data;
} PyCThostFtdcSuperUserFunctionField;

extern PyTypeObject PyCThostFtdcSuperUserFunctionFieldType;

extern int PyCThostFtdcSuperUserFunctionFieldType_init(PyObject *module);

#endif
