#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单

typedef struct PyCThostFtdcQryOrderField {
    PyObject_HEAD
    CThostFtdcQryOrderField data;
} PyCThostFtdcQryOrderField;

extern PyTypeObject PyCThostFtdcQryOrderFieldType;

extern int PyCThostFtdcQryOrderFieldType_init(PyObject *module);

#endif
