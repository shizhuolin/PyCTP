#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerField {
    PyObject_HEAD
    CThostFtdcBrokerField data;
} PyCThostFtdcBrokerField;

extern PyTypeObject PyCThostFtdcBrokerFieldType;

extern int PyCThostFtdcBrokerFieldType_init(PyObject *module);

#endif
