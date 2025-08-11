#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERSYNCFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERSYNCFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerSyncField {
    PyObject_HEAD
    CThostFtdcBrokerSyncField data;
} PyCThostFtdcBrokerSyncField;

extern PyTypeObject PyCThostFtdcBrokerSyncFieldType;

extern int PyCThostFtdcBrokerSyncFieldType_init(PyObject *module);

#endif
