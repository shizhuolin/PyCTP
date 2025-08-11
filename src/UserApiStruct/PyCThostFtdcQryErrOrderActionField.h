#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERRORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYERRORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryErrOrderActionField {
    PyObject_HEAD
    CThostFtdcQryErrOrderActionField data;
} PyCThostFtdcQryErrOrderActionField;

extern PyTypeObject PyCThostFtdcQryErrOrderActionFieldType;

extern int PyCThostFtdcQryErrOrderActionFieldType_init(PyObject *module);

#endif
