#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMADDONINTERPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPBMAddOnInterParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMAddOnInterParamField data;
} PyCThostFtdcSyncDeltaSPBMAddOnInterParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType;

extern int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init(PyObject *module);

#endif
