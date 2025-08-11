#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryBrokerUserField {
    PyObject_HEAD
    CThostFtdcQryBrokerUserField data;
} PyCThostFtdcQryBrokerUserField;

extern PyTypeObject PyCThostFtdcQryBrokerUserFieldType;

extern int PyCThostFtdcQryBrokerUserFieldType_init(PyObject *module);

#endif
