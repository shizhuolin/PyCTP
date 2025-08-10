#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARKEDORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///预埋单

typedef struct PyCThostFtdcParkedOrderField {
    PyObject_HEAD
    CThostFtdcParkedOrderField data;
} PyCThostFtdcParkedOrderField;

extern PyTypeObject PyCThostFtdcParkedOrderFieldType;

extern int PyCThostFtdcParkedOrderFieldType_init(PyObject *module);

#endif
