#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERRORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERRORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误报单

typedef struct PyCThostFtdcQryErrOrderField {
    PyObject_HEAD
    CThostFtdcQryErrOrderField data;
} PyCThostFtdcQryErrOrderField;

extern PyTypeObject PyCThostFtdcQryErrOrderFieldType;

extern int PyCThostFtdcQryErrOrderFieldType_init(PyObject *module);

#endif
