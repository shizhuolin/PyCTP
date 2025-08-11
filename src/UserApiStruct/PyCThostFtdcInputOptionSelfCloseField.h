#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInputOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcInputOptionSelfCloseField data;
} PyCThostFtdcInputOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcInputOptionSelfCloseFieldType;

extern int PyCThostFtdcInputOptionSelfCloseFieldType_init(PyObject *module);

#endif
