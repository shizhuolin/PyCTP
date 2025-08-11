#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARKEDORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcParkedOrderActionField {
    PyObject_HEAD
    CThostFtdcParkedOrderActionField data;
} PyCThostFtdcParkedOrderActionField;

extern PyTypeObject PyCThostFtdcParkedOrderActionFieldType;

extern int PyCThostFtdcParkedOrderActionFieldType_init(PyObject *module);

#endif
