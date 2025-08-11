#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISSEMINATIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISSEMINATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcDisseminationField {
    PyObject_HEAD
    CThostFtdcDisseminationField data;
} PyCThostFtdcDisseminationField;

extern PyTypeObject PyCThostFtdcDisseminationFieldType;

extern int PyCThostFtdcDisseminationFieldType_init(PyObject *module);

#endif
