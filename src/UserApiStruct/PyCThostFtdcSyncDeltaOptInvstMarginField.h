#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaOptInvstMarginField {
    PyObject_HEAD
    CThostFtdcSyncDeltaOptInvstMarginField data;
} PyCThostFtdcSyncDeltaOptInvstMarginField;

extern PyTypeObject PyCThostFtdcSyncDeltaOptInvstMarginFieldType;

extern int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(PyObject *module);

#endif
