#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTATRADINGACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTATRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平资金

typedef struct PyCThostFtdcSyncDeltaTradingAccountField {
    PyObject_HEAD
    CThostFtdcSyncDeltaTradingAccountField data;
} PyCThostFtdcSyncDeltaTradingAccountField;

extern PyTypeObject PyCThostFtdcSyncDeltaTradingAccountFieldType;

extern int PyCThostFtdcSyncDeltaTradingAccountFieldType_init(PyObject *module);

#endif
