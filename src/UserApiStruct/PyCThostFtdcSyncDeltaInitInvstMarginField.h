#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInitInvstMarginField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInitInvstMarginField data;
} PyCThostFtdcSyncDeltaInitInvstMarginField;

extern PyTypeObject PyCThostFtdcSyncDeltaInitInvstMarginFieldType;

extern int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init(PyObject *module);

#endif
