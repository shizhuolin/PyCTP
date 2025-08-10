#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司

typedef struct PyCThostFtdcQryBrokerField {
    PyObject_HEAD
    CThostFtdcQryBrokerField data;
} PyCThostFtdcQryBrokerField;

extern PyTypeObject PyCThostFtdcQryBrokerFieldType;

extern int PyCThostFtdcQryBrokerFieldType_init(PyObject *module);

#endif
