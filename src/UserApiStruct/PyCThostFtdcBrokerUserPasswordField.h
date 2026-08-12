#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERPASSWORDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司用户口令

typedef struct PyCThostFtdcBrokerUserPasswordField {
    PyObject_HEAD
    CThostFtdcBrokerUserPasswordField data;
} PyCThostFtdcBrokerUserPasswordField;

extern PyTypeObject PyCThostFtdcBrokerUserPasswordFieldType;

extern int PyCThostFtdcBrokerUserPasswordFieldType_init(PyObject *module);

#endif
