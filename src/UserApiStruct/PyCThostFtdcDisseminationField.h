#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISSEMINATIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISSEMINATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///信息分发

typedef struct PyCThostFtdcDisseminationField {
    PyObject_HEAD
    CThostFtdcDisseminationField data;
} PyCThostFtdcDisseminationField;

extern PyTypeObject PyCThostFtdcDisseminationFieldType;

extern int PyCThostFtdcDisseminationFieldType_init(PyObject *module);

#endif
