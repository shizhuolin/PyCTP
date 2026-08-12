#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报单操作

typedef struct PyCThostFtdcOrderActionField {
    PyObject_HEAD
    CThostFtdcOrderActionField data;
} PyCThostFtdcOrderActionField;

extern PyTypeObject PyCThostFtdcOrderActionFieldType;

extern int PyCThostFtdcOrderActionFieldType_init(PyObject *module);

#endif
