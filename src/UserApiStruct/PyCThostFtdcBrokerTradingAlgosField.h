#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGALGOSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGALGOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司交易算法

typedef struct PyCThostFtdcBrokerTradingAlgosField {
    PyObject_HEAD
    CThostFtdcBrokerTradingAlgosField data;
} PyCThostFtdcBrokerTradingAlgosField;

extern PyTypeObject PyCThostFtdcBrokerTradingAlgosFieldType;

extern int PyCThostFtdcBrokerTradingAlgosFieldType_init(PyObject *module);

#endif
