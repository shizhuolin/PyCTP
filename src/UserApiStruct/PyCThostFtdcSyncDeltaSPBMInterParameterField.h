#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPBMInterParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMInterParameterField data;
} PyCThostFtdcSyncDeltaSPBMInterParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMInterParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(PyObject *module);

#endif
