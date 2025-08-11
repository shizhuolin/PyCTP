#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaProductStatusField {
    PyObject_HEAD
    CThostFtdcSyncDeltaProductStatusField data;
} PyCThostFtdcSyncDeltaProductStatusField;

extern PyTypeObject PyCThostFtdcSyncDeltaProductStatusFieldType;

extern int PyCThostFtdcSyncDeltaProductStatusFieldType_init(PyObject *module);

#endif
