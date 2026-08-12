#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户IP

typedef struct PyCThostFtdcUserIPField {
    PyObject_HEAD
    CThostFtdcUserIPField data;
} PyCThostFtdcUserIPField;

extern PyTypeObject PyCThostFtdcUserIPFieldType;

extern int PyCThostFtdcUserIPFieldType_init(PyObject *module);

#endif
