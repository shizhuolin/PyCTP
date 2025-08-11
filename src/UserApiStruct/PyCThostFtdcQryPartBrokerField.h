#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARTBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryPartBrokerField {
    PyObject_HEAD
    CThostFtdcQryPartBrokerField data;
} PyCThostFtdcQryPartBrokerField;

extern PyTypeObject PyCThostFtdcQryPartBrokerFieldType;

extern int PyCThostFtdcQryPartBrokerFieldType_init(PyObject *module);

#endif
