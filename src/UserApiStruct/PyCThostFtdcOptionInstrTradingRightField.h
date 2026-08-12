#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者期权合约交易权限

typedef struct PyCThostFtdcOptionInstrTradingRightField {
    PyObject_HEAD
    CThostFtdcOptionInstrTradingRightField data;
} PyCThostFtdcOptionInstrTradingRightField;

extern PyTypeObject PyCThostFtdcOptionInstrTradingRightFieldType;

extern int PyCThostFtdcOptionInstrTradingRightFieldType_init(PyObject *module);

#endif
