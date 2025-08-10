#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPTHMARKETDATAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPTHMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///深度行情

typedef struct PyCThostFtdcDepthMarketDataField {
    PyObject_HEAD
    CThostFtdcDepthMarketDataField data;
} PyCThostFtdcDepthMarketDataField;

extern PyTypeObject PyCThostFtdcDepthMarketDataFieldType;

extern int PyCThostFtdcDepthMarketDataFieldType_init(PyObject *module);

#endif
