#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权自对冲

typedef struct PyCThostFtdcOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcOptionSelfCloseField data;
} PyCThostFtdcOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcOptionSelfCloseFieldType;

extern int PyCThostFtdcOptionSelfCloseFieldType_init(PyObject *module);

#endif
