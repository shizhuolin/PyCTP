#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEULFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTMARGINRATEULFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平期权标的调整保证金率

typedef struct PyCThostFtdcSyncDeltaInvstMarginRateULField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstMarginRateULField data;
} PyCThostFtdcSyncDeltaInvstMarginRateULField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateULFieldType;

extern int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(PyObject *module);

#endif
