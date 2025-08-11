#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGTRADINGACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncingTradingAccountField {
    PyObject_HEAD
    CThostFtdcSyncingTradingAccountField data;
} PyCThostFtdcSyncingTradingAccountField;

extern PyTypeObject PyCThostFtdcSyncingTradingAccountFieldType;

extern int PyCThostFtdcSyncingTradingAccountFieldType_init(PyObject *module);

#endif
