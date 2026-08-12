#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者期货保证金率

typedef struct PyCThostFtdcSyncDeltaInvstMarginRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstMarginRateField data;
} PyCThostFtdcSyncDeltaInvstMarginRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateFieldType;

extern int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(PyObject *module);

#endif
