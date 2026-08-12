#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERPASSWORDUPDATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERPASSWORDUPDATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户口令变更

typedef struct PyCThostFtdcUserPasswordUpdateField {
    PyObject_HEAD
    CThostFtdcUserPasswordUpdateField data;
} PyCThostFtdcUserPasswordUpdateField;

extern PyTypeObject PyCThostFtdcUserPasswordUpdateFieldType;

extern int PyCThostFtdcUserPasswordUpdateFieldType_init(PyObject *module);

#endif
