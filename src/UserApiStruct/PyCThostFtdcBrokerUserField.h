#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerUserField {
    PyObject_HEAD
    CThostFtdcBrokerUserField data;
} PyCThostFtdcBrokerUserField;

extern PyTypeObject PyCThostFtdcBrokerUserFieldType;

extern int PyCThostFtdcBrokerUserFieldType_init(PyObject *module);

#endif
