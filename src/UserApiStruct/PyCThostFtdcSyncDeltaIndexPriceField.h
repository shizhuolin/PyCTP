#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINDEXPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINDEXPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平现货指数

typedef struct PyCThostFtdcSyncDeltaIndexPriceField {
    PyObject_HEAD
    CThostFtdcSyncDeltaIndexPriceField data;
} PyCThostFtdcSyncDeltaIndexPriceField;

extern PyTypeObject PyCThostFtdcSyncDeltaIndexPriceFieldType;

extern int PyCThostFtdcSyncDeltaIndexPriceFieldType_init(PyObject *module);

#endif
