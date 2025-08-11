#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerTradingParamsField {
    PyObject_HEAD
    CThostFtdcBrokerTradingParamsField data;
} PyCThostFtdcBrokerTradingParamsField;

extern PyTypeObject PyCThostFtdcBrokerTradingParamsFieldType;

extern int PyCThostFtdcBrokerTradingParamsFieldType_init(PyObject *module);

#endif
