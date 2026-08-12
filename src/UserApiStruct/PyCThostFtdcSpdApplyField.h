#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPDAPPLYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请回报

typedef struct PyCThostFtdcSpdApplyField {
    PyObject_HEAD
    CThostFtdcSpdApplyField data;
} PyCThostFtdcSpdApplyField;

extern PyTypeObject PyCThostFtdcSpdApplyFieldType;

extern int PyCThostFtdcSpdApplyFieldType_init(PyObject *module);

#endif
