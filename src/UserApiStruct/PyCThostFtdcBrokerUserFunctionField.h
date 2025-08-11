#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerUserFunctionField {
    PyObject_HEAD
    CThostFtdcBrokerUserFunctionField data;
} PyCThostFtdcBrokerUserFunctionField;

extern PyTypeObject PyCThostFtdcBrokerUserFunctionFieldType;

extern int PyCThostFtdcBrokerUserFunctionFieldType_init(PyObject *module);

#endif
