#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvstCommRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstCommRateField data;
} PyCThostFtdcSyncDeltaInvstCommRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstCommRateFieldType;

extern int PyCThostFtdcSyncDeltaInvstCommRateFieldType_init(PyObject *module);

#endif
