#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryOrderField {
    PyObject_HEAD
    CThostFtdcQryOrderField data;
} PyCThostFtdcQryOrderField;

extern PyTypeObject PyCThostFtdcQryOrderFieldType;

extern int PyCThostFtdcQryOrderFieldType_init(PyObject *module);

#endif
