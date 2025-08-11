#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRULEIntraParameterField data;
} PyCThostFtdcSyncDeltaRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRULEIntraParameterFieldType;

extern int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(PyObject *module);

#endif
