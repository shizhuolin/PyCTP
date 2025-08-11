#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGALGOSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGALGOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryBrokerTradingAlgosField {
    PyObject_HEAD
    CThostFtdcQryBrokerTradingAlgosField data;
} PyCThostFtdcQryBrokerTradingAlgosField;

extern PyTypeObject PyCThostFtdcQryBrokerTradingAlgosFieldType;

extern int PyCThostFtdcQryBrokerTradingAlgosFieldType_init(PyObject *module);

#endif
