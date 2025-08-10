#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平交叉汇率

typedef struct PyCThostFtdcSyncDeltaProductExchRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaProductExchRateField data;
} PyCThostFtdcSyncDeltaProductExchRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaProductExchRateFieldType;

extern int PyCThostFtdcSyncDeltaProductExchRateFieldType_init(PyObject *module);

#endif
