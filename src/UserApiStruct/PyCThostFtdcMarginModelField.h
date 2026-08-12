#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARGINMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者保证金率模板

typedef struct PyCThostFtdcMarginModelField {
    PyObject_HEAD
    CThostFtdcMarginModelField data;
} PyCThostFtdcMarginModelField;

extern PyTypeObject PyCThostFtdcMarginModelFieldType;

extern int PyCThostFtdcMarginModelFieldType_init(PyObject *module);

#endif
