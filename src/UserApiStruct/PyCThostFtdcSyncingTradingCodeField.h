#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGTRADINGCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的交易代码

typedef struct PyCThostFtdcSyncingTradingCodeField {
    PyObject_HEAD
    CThostFtdcSyncingTradingCodeField data;
} PyCThostFtdcSyncingTradingCodeField;

extern PyTypeObject PyCThostFtdcSyncingTradingCodeFieldType;

extern int PyCThostFtdcSyncingTradingCodeFieldType_init(PyObject *module);

#endif
