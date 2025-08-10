#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平产品信息

typedef struct PyCThostFtdcSyncDeltaProductStatusField {
    PyObject_HEAD
    CThostFtdcSyncDeltaProductStatusField data;
} PyCThostFtdcSyncDeltaProductStatusField;

extern PyTypeObject PyCThostFtdcSyncDeltaProductStatusFieldType;

extern int PyCThostFtdcSyncDeltaProductStatusFieldType_init(PyObject *module);

#endif
