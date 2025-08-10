#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平中金现货期权投资者保证金率

typedef struct PyCThostFtdcSyncDeltaOptInvstMarginField {
    PyObject_HEAD
    CThostFtdcSyncDeltaOptInvstMarginField data;
} PyCThostFtdcSyncDeltaOptInvstMarginField;

extern PyTypeObject PyCThostFtdcSyncDeltaOptInvstMarginFieldType;

extern int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(PyObject *module);

#endif
