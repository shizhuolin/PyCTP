#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSInterParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSInterParameterField data;
} PyCThostFtdcSyncDeltaRCAMSInterParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(PyObject *module);

#endif
