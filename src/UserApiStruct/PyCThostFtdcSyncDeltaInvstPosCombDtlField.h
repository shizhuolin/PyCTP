#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVSTPOSCOMBDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvstPosCombDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvstPosCombDtlField data;
} PyCThostFtdcSyncDeltaInvstPosCombDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType;

extern int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(PyObject *module);

#endif
