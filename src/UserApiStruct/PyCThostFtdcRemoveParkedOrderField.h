#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///删除预埋单

typedef struct PyCThostFtdcRemoveParkedOrderField {
    PyObject_HEAD
    CThostFtdcRemoveParkedOrderField data;
} PyCThostFtdcRemoveParkedOrderField;

extern PyTypeObject PyCThostFtdcRemoveParkedOrderFieldType;

extern int PyCThostFtdcRemoveParkedOrderFieldType_init(PyObject *module);

#endif
