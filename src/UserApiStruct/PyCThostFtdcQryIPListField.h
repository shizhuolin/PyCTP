#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPLISTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPLISTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询IP列表

typedef struct PyCThostFtdcQryIPListField {
    PyObject_HEAD
    CThostFtdcQryIPListField data;
} PyCThostFtdcQryIPListField;

extern PyTypeObject PyCThostFtdcQryIPListFieldType;

extern int PyCThostFtdcQryIPListFieldType_init(PyObject *module);

#endif
