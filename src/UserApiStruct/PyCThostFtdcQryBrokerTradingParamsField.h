#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryBrokerTradingParamsField {
    PyObject_HEAD
    CThostFtdcQryBrokerTradingParamsField data;
} PyCThostFtdcQryBrokerTradingParamsField;

extern PyTypeObject PyCThostFtdcQryBrokerTradingParamsFieldType;

extern int PyCThostFtdcQryBrokerTradingParamsFieldType_init(PyObject *module);

#endif
