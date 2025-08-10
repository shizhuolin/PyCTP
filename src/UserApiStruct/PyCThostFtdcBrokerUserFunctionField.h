#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司用户功能权限

typedef struct PyCThostFtdcBrokerUserFunctionField {
    PyObject_HEAD
    CThostFtdcBrokerUserFunctionField data;
} PyCThostFtdcBrokerUserFunctionField;

extern PyTypeObject PyCThostFtdcBrokerUserFunctionFieldType;

extern int PyCThostFtdcBrokerUserFunctionFieldType_init(PyObject *module);

#endif
