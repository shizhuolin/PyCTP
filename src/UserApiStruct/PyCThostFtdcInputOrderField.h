#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报单

typedef struct PyCThostFtdcInputOrderField {
    PyObject_HEAD
    CThostFtdcInputOrderField data;
} PyCThostFtdcInputOrderField;

extern PyTypeObject PyCThostFtdcInputOrderFieldType;

extern int PyCThostFtdcInputOrderFieldType_init(PyObject *module);

#endif
