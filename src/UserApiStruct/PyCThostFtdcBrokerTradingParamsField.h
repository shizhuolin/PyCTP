#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司交易参数

typedef struct PyCThostFtdcBrokerTradingParamsField {
    PyObject_HEAD
    CThostFtdcBrokerTradingParamsField data;
} PyCThostFtdcBrokerTradingParamsField;

extern PyTypeObject PyCThostFtdcBrokerTradingParamsFieldType;

extern int PyCThostFtdcBrokerTradingParamsFieldType_init(PyObject *module);

#endif
