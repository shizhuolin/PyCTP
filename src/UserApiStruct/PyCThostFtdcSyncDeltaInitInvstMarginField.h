#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算总保证金

typedef struct PyCThostFtdcSyncDeltaInitInvstMarginField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInitInvstMarginField data;
} PyCThostFtdcSyncDeltaInitInvstMarginField;

extern PyTypeObject PyCThostFtdcSyncDeltaInitInvstMarginFieldType;

extern int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init(PyObject *module);

#endif
