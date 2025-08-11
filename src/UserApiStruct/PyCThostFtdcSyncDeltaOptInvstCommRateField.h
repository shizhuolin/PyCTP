#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaOptInvstCommRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaOptInvstCommRateField data;
} PyCThostFtdcSyncDeltaOptInvstCommRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaOptInvstCommRateFieldType;

extern int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init(PyObject *module);

#endif
