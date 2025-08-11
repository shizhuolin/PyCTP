#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcOptionSelfCloseField data;
} PyCThostFtdcOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcOptionSelfCloseFieldType;

extern int PyCThostFtdcOptionSelfCloseFieldType_init(PyObject *module);

#endif
