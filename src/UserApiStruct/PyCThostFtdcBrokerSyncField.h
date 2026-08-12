#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERSYNCFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERSYNCFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司同步

typedef struct PyCThostFtdcBrokerSyncField {
    PyObject_HEAD
    CThostFtdcBrokerSyncField data;
} PyCThostFtdcBrokerSyncField;

extern PyTypeObject PyCThostFtdcBrokerSyncFieldType;

extern int PyCThostFtdcBrokerSyncFieldType_init(PyObject *module);

#endif
