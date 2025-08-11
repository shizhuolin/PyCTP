#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcAuthIPField {
    PyObject_HEAD
    CThostFtdcAuthIPField data;
} PyCThostFtdcAuthIPField;

extern PyTypeObject PyCThostFtdcAuthIPFieldType;

extern int PyCThostFtdcAuthIPFieldType_init(PyObject *module);

#endif
