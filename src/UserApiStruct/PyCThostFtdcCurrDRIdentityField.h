#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRDRIDENTITYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRDRIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCurrDRIdentityField {
    PyObject_HEAD
    CThostFtdcCurrDRIdentityField data;
} PyCThostFtdcCurrDRIdentityField;

extern PyTypeObject PyCThostFtdcCurrDRIdentityFieldType;

extern int PyCThostFtdcCurrDRIdentityFieldType_init(PyObject *module);

#endif
