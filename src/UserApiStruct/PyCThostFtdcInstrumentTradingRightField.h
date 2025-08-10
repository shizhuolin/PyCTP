#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者合约交易权限

typedef struct PyCThostFtdcInstrumentTradingRightField {
    PyObject_HEAD
    CThostFtdcInstrumentTradingRightField data;
} PyCThostFtdcInstrumentTradingRightField;

extern PyTypeObject PyCThostFtdcInstrumentTradingRightFieldType;

extern int PyCThostFtdcInstrumentTradingRightFieldType_init(PyObject *module);

#endif
