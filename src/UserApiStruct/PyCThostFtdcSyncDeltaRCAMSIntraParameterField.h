#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSIntraParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSIntraParameterField data;
} PyCThostFtdcSyncDeltaRCAMSIntraParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init(PyObject *module);

#endif
