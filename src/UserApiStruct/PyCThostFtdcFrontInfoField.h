#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFRONTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFRONTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///前置信息

typedef struct PyCThostFtdcFrontInfoField {
    PyObject_HEAD
    CThostFtdcFrontInfoField data;
} PyCThostFtdcFrontInfoField;

extern PyTypeObject PyCThostFtdcFrontInfoFieldType;

extern int PyCThostFtdcFrontInfoFieldType_init(PyObject *module);

#endif
