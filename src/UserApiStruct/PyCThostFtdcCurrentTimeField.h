#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRENTTIMEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRENTTIMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前时间

typedef struct PyCThostFtdcCurrentTimeField {
    PyObject_HEAD
    CThostFtdcCurrentTimeField data;
} PyCThostFtdcCurrentTimeField;

extern PyTypeObject PyCThostFtdcCurrentTimeFieldType;

extern int PyCThostFtdcCurrentTimeFieldType_init(PyObject *module);

#endif
