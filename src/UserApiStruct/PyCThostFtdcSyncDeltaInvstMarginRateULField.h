#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEULFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEULFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvstMarginRateULField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstMarginRateULField data;
} PyCThostFtdcSyncDeltaInvstMarginRateULField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateULFieldType;

extern int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(PyObject *module);

#endif
