#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCIPLISTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCIPLISTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///IP列表

typedef struct PyCThostFtdcIPListField {
    PyObject_HEAD
    CThostFtdcIPListField data;
} PyCThostFtdcIPListField;

extern PyTypeObject PyCThostFtdcIPListFieldType;

extern int PyCThostFtdcIPListFieldType_init(PyObject *module);

#endif
