#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司用户

typedef struct PyCThostFtdcQryBrokerUserField {
    PyObject_HEAD
    CThostFtdcQryBrokerUserField data;
} PyCThostFtdcQryBrokerUserField;

extern PyTypeObject PyCThostFtdcQryBrokerUserFieldType;

extern int PyCThostFtdcQryBrokerUserFieldType_init(PyObject *module);

#endif
