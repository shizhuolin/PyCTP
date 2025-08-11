#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPTHMARKETDATAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYDEPTHMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryDepthMarketDataField {
    PyObject_HEAD
    CThostFtdcQryDepthMarketDataField data;
} PyCThostFtdcQryDepthMarketDataField;

extern PyTypeObject PyCThostFtdcQryDepthMarketDataFieldType;

extern int PyCThostFtdcQryDepthMarketDataFieldType_init(PyObject *module);

#endif
