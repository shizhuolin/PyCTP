#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约交易权限

typedef struct PyCThostFtdcQryInstrumentTradingRightField {
    PyObject_HEAD
    CThostFtdcQryInstrumentTradingRightField data;
} PyCThostFtdcQryInstrumentTradingRightField;

extern PyTypeObject PyCThostFtdcQryInstrumentTradingRightFieldType;

extern int PyCThostFtdcQryInstrumentTradingRightFieldType_init(PyObject *module);

#endif
