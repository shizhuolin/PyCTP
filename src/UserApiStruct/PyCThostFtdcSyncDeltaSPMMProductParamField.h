#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPMMProductParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPMMProductParamField data;
} PyCThostFtdcSyncDeltaSPMMProductParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPMMProductParamFieldType;

extern int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(PyObject *module);

#endif
