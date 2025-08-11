#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMMODELPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMMODELPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPMMModelParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPMMModelParamField data;
} PyCThostFtdcSyncDeltaSPMMModelParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPMMModelParamFieldType;

extern int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init(PyObject *module);

#endif
