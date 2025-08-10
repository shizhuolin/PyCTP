#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERDEPOSITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司资金

typedef struct PyCThostFtdcBrokerDepositField {
    PyObject_HEAD
    CThostFtdcBrokerDepositField data;
} PyCThostFtdcBrokerDepositField;

extern PyTypeObject PyCThostFtdcBrokerDepositFieldType;

extern int PyCThostFtdcBrokerDepositFieldType_init(PyObject *module);

#endif
