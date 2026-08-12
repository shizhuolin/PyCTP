#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSUPERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///管理用户

typedef struct PyCThostFtdcSuperUserField {
    PyObject_HEAD
    CThostFtdcSuperUserField data;
} PyCThostFtdcSuperUserField;

extern PyTypeObject PyCThostFtdcSuperUserFieldType;

extern int PyCThostFtdcSuperUserFieldType_init(PyObject *module);

#endif
