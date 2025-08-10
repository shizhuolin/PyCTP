#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSEREVENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSEREVENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司用户事件

typedef struct PyCThostFtdcBrokerUserEventField {
    PyObject_HEAD
    CThostFtdcBrokerUserEventField data;
} PyCThostFtdcBrokerUserEventField;

extern PyTypeObject PyCThostFtdcBrokerUserEventFieldType;

extern int PyCThostFtdcBrokerUserEventFieldType_init(PyObject *module);

#endif
