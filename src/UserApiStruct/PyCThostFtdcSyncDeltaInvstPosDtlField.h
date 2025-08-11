#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvstPosDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstPosDtlField data;
} PyCThostFtdcSyncDeltaInvstPosDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstPosDtlFieldType;

extern int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(PyObject *module);

#endif
