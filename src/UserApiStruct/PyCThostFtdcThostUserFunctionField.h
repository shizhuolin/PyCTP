#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTHOSTUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTHOSTUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcThostUserFunctionField {
    PyObject_HEAD
    CThostFtdcThostUserFunctionField data;
} PyCThostFtdcThostUserFunctionField;

extern PyTypeObject PyCThostFtdcThostUserFunctionFieldType;

extern int PyCThostFtdcThostUserFunctionFieldType_init(PyObject *module);

#endif
