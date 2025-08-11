#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARTBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcPartBrokerField {
    PyObject_HEAD
    CThostFtdcPartBrokerField data;
} PyCThostFtdcPartBrokerField;

extern PyTypeObject PyCThostFtdcPartBrokerFieldType;

extern int PyCThostFtdcPartBrokerFieldType_init(PyObject *module);

#endif
