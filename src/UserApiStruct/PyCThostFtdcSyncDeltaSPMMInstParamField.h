#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPMMInstParamField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPMMInstParamField data;
} PyCThostFtdcSyncDeltaSPMMInstParamField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPMMInstParamFieldType;

extern int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(PyObject *module);

#endif
