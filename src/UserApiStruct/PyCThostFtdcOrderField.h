#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报单

typedef struct PyCThostFtdcOrderField {
    PyObject_HEAD
    CThostFtdcOrderField data;
} PyCThostFtdcOrderField;

extern PyTypeObject PyCThostFtdcOrderFieldType;

extern int PyCThostFtdcOrderFieldType_init(PyObject *module);

#endif
