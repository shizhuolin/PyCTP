#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCWITHDRAWPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCWITHDRAWPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcWithDrawParamField {
    PyObject_HEAD
    CThostFtdcWithDrawParamField data;
} PyCThostFtdcWithDrawParamField;

extern PyTypeObject PyCThostFtdcWithDrawParamFieldType;

extern int PyCThostFtdcWithDrawParamFieldType_init(PyObject *module);

#endif
