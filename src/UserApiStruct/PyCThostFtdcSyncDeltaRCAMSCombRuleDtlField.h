#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBRULEDTLFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSCombRuleDtlField data;
} PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(PyObject *module);

#endif
