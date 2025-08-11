#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINVSTCOMBPOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSInvstCombPosField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSInvstCombPosField data;
} PyCThostFtdcSyncDeltaRCAMSInvstCombPosField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(PyObject *module);

#endif
