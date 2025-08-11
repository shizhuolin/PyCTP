#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSSOPTADJPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSSOptAdjParamField data;
} PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init(PyObject *module);

#endif
