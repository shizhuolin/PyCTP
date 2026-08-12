#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司交易参数

typedef struct PyCThostFtdcQryBrokerTradingParamsField {
    PyObject_HEAD
    CThostFtdcQryBrokerTradingParamsField data;
} PyCThostFtdcQryBrokerTradingParamsField;

extern PyTypeObject PyCThostFtdcQryBrokerTradingParamsFieldType;

extern int PyCThostFtdcQryBrokerTradingParamsFieldType_init(PyObject *module);

#endif
