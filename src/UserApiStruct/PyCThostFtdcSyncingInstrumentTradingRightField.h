#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约交易权限

typedef struct PyCThostFtdcSyncingInstrumentTradingRightField {
    PyObject_HEAD
    CThostFtdcSyncingInstrumentTradingRightField data;
} PyCThostFtdcSyncingInstrumentTradingRightField;

extern PyTypeObject PyCThostFtdcSyncingInstrumentTradingRightFieldType;

extern int PyCThostFtdcSyncingInstrumentTradingRightFieldType_init(PyObject *module);

#endif
