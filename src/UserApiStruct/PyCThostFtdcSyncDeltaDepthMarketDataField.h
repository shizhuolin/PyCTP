#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADEPTHMARKETDATAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADEPTHMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平行情

typedef struct PyCThostFtdcSyncDeltaDepthMarketDataField {
    PyObject_HEAD
    CThostFtdcSyncDeltaDepthMarketDataField data;
} PyCThostFtdcSyncDeltaDepthMarketDataField;

extern PyTypeObject PyCThostFtdcSyncDeltaDepthMarketDataFieldType;

extern int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init(PyObject *module);

#endif
