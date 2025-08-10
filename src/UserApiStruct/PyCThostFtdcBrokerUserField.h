#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司用户

typedef struct PyCThostFtdcBrokerUserField {
    PyObject_HEAD
    CThostFtdcBrokerUserField data;
} PyCThostFtdcBrokerUserField;

extern PyTypeObject PyCThostFtdcBrokerUserFieldType;

extern int PyCThostFtdcBrokerUserFieldType_init(PyObject *module);

#endif
