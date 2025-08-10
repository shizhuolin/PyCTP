#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPENACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期开户信息

typedef struct PyCThostFtdcOpenAccountField {
    PyObject_HEAD
    CThostFtdcOpenAccountField data;
} PyCThostFtdcOpenAccountField;

extern PyTypeObject PyCThostFtdcOpenAccountFieldType;

extern int PyCThostFtdcOpenAccountFieldType_init(PyObject *module);

#endif
