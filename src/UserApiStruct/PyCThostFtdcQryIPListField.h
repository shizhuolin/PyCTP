#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPLISTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPLISTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryIPListField {
    PyObject_HEAD
    CThostFtdcQryIPListField data;
} PyCThostFtdcQryIPListField;

extern PyTypeObject PyCThostFtdcQryIPListFieldType;

extern int PyCThostFtdcQryIPListFieldType_init(PyObject *module);

#endif
