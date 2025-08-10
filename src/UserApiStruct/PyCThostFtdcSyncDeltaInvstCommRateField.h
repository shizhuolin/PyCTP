#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平期货手续费率

typedef struct PyCThostFtdcSyncDeltaInvstCommRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstCommRateField data;
} PyCThostFtdcSyncDeltaInvstCommRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstCommRateFieldType;

extern int PyCThostFtdcSyncDeltaInvstCommRateFieldType_init(PyObject *module);

#endif
