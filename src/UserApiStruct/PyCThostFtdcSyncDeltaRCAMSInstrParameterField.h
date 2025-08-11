#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSInstrParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSInstrParameterField data;
} PyCThostFtdcSyncDeltaRCAMSInstrParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init(PyObject *module);

#endif
