#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRemoveParkedOrderField {
    PyObject_HEAD
    CThostFtdcRemoveParkedOrderField data;
} PyCThostFtdcRemoveParkedOrderField;

extern PyTypeObject PyCThostFtdcRemoveParkedOrderFieldType;

extern int PyCThostFtdcRemoveParkedOrderFieldType_init(PyObject *module);

#endif
