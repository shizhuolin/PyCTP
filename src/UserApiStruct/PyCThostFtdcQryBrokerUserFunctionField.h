#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryBrokerUserFunctionField {
    PyObject_HEAD
    CThostFtdcQryBrokerUserFunctionField data;
} PyCThostFtdcQryBrokerUserFunctionField;

extern PyTypeObject PyCThostFtdcQryBrokerUserFunctionFieldType;

extern int PyCThostFtdcQryBrokerUserFunctionFieldType_init(PyObject *module);

#endif
