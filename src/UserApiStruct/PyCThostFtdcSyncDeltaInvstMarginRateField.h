#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvstMarginRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstMarginRateField data;
} PyCThostFtdcSyncDeltaInvstMarginRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateFieldType;

extern int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(PyObject *module);

#endif
