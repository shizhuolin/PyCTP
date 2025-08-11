#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFENSUSERINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFENSUSERINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcFensUserInfoField {
    PyObject_HEAD
    CThostFtdcFensUserInfoField data;
} PyCThostFtdcFensUserInfoField;

extern PyTypeObject PyCThostFtdcFensUserInfoFieldType;

extern int PyCThostFtdcFensUserInfoFieldType_init(PyObject *module);

#endif
