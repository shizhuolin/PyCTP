#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMFUTUREPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaSPBMFutureParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMFutureParameterField data;
} PyCThostFtdcSyncDeltaSPBMFutureParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init(PyObject *module);

#endif
