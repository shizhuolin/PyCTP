#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGOUTALLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGOUTALLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcLogoutAllField {
    PyObject_HEAD
    CThostFtdcLogoutAllField data;
} PyCThostFtdcLogoutAllField;

extern PyTypeObject PyCThostFtdcLogoutAllFieldType;

extern int PyCThostFtdcLogoutAllFieldType_init(PyObject *module);

#endif
