#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaProductExchRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaProductExchRateField data;
} PyCThostFtdcSyncDeltaProductExchRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaProductExchRateFieldType;

extern int PyCThostFtdcSyncDeltaProductExchRateFieldType_init(PyObject *module);

#endif
