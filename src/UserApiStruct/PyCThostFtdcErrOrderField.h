#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcErrOrderField {
    PyObject_HEAD
    CThostFtdcErrOrderField data;
} PyCThostFtdcErrOrderField;

extern PyTypeObject PyCThostFtdcErrOrderFieldType;

extern int PyCThostFtdcErrOrderFieldType_init(PyObject *module);

#endif
