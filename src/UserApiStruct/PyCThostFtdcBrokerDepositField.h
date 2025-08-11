#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERDEPOSITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerDepositField {
    PyObject_HEAD
    CThostFtdcBrokerDepositField data;
} PyCThostFtdcBrokerDepositField;

extern PyTypeObject PyCThostFtdcBrokerDepositFieldType;

extern int PyCThostFtdcBrokerDepositFieldType_init(PyObject *module);

#endif
