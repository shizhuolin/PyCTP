#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPDAPPLYACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPDAPPLYACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请撤销回报

typedef struct PyCThostFtdcSpdApplyActionField {
    PyObject_HEAD
    CThostFtdcSpdApplyActionField data;
} PyCThostFtdcSpdApplyActionField;

extern PyTypeObject PyCThostFtdcSpdApplyActionFieldType;

extern int PyCThostFtdcSpdApplyActionFieldType_init(PyObject *module);

#endif
