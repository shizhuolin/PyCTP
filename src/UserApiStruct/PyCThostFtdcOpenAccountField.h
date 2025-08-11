#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPENACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOpenAccountField {
    PyObject_HEAD
    CThostFtdcOpenAccountField data;
} PyCThostFtdcOpenAccountField;

extern PyTypeObject PyCThostFtdcOpenAccountFieldType;

extern int PyCThostFtdcOpenAccountFieldType_init(PyObject *module);

#endif
