#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平交易所期货保证金率

typedef struct PyCThostFtdcSyncDeltaExchMarginRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaExchMarginRateField data;
} PyCThostFtdcSyncDeltaExchMarginRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaExchMarginRateFieldType;

extern int PyCThostFtdcSyncDeltaExchMarginRateFieldType_init(PyObject *module);

#endif
