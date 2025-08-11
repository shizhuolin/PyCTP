#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryParkedOrderField {
    PyObject_HEAD
    CThostFtdcQryParkedOrderField data;
} PyCThostFtdcQryParkedOrderField;

extern PyTypeObject PyCThostFtdcQryParkedOrderFieldType;

extern int PyCThostFtdcQryParkedOrderFieldType_init(PyObject *module);

#endif
