#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySuperUserFunctionField {
    PyObject_HEAD
    CThostFtdcQrySuperUserFunctionField data;
} PyCThostFtdcQrySuperUserFunctionField;

extern PyTypeObject PyCThostFtdcQrySuperUserFunctionFieldType;

extern int PyCThostFtdcQrySuperUserFunctionFieldType_init(PyObject *module);

#endif
