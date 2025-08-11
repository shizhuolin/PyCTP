#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInfoField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInfoField data;
} PyCThostFtdcSyncDeltaInfoField;

extern PyTypeObject PyCThostFtdcSyncDeltaInfoFieldType;

extern int PyCThostFtdcSyncDeltaInfoFieldType_init(PyObject *module);

#endif
