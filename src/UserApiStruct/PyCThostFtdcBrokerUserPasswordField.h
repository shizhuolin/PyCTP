#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERPASSWORDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerUserPasswordField {
    PyObject_HEAD
    CThostFtdcBrokerUserPasswordField data;
} PyCThostFtdcBrokerUserPasswordField;

extern PyTypeObject PyCThostFtdcBrokerUserPasswordFieldType;

extern int PyCThostFtdcBrokerUserPasswordFieldType_init(PyObject *module);

#endif
