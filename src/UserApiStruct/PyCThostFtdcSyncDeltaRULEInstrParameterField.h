#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRULEInstrParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRULEInstrParameterField data;
} PyCThostFtdcSyncDeltaRULEInstrParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRULEInstrParameterFieldType;

extern int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(PyObject *module);

#endif
