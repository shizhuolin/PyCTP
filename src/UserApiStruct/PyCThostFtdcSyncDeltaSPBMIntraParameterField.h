#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPBMIntraParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMIntraParameterField data;
} PyCThostFtdcSyncDeltaSPBMIntraParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMIntraParameterFieldType_init(PyObject *module);

#endif
