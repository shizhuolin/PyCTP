#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSEREVENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERUSEREVENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司用户事件

typedef struct PyCThostFtdcQryBrokerUserEventField {
    PyObject_HEAD
    CThostFtdcQryBrokerUserEventField data;
} PyCThostFtdcQryBrokerUserEventField;

extern PyTypeObject PyCThostFtdcQryBrokerUserEventFieldType;

extern int PyCThostFtdcQryBrokerUserEventFieldType_init(PyObject *module);

#endif
