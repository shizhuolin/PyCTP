#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHUSERIDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHUSERIDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcAuthUserIDField {
    PyObject_HEAD
    CThostFtdcAuthUserIDField data;
} PyCThostFtdcAuthUserIDField;

extern PyTypeObject PyCThostFtdcAuthUserIDFieldType;

extern int PyCThostFtdcAuthUserIDFieldType_init(PyObject *module);

#endif
