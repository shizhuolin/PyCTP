#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询预埋单

typedef struct PyCThostFtdcQryParkedOrderField {
    PyObject_HEAD
    CThostFtdcQryParkedOrderField data;
} PyCThostFtdcQryParkedOrderField;

extern PyTypeObject PyCThostFtdcQryParkedOrderFieldType;

extern int PyCThostFtdcQryParkedOrderFieldType_init(PyObject *module);

#endif
