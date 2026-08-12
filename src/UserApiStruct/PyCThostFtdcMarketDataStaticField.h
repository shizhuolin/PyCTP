#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATASTATICFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATASTATICFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情静态属性

typedef struct PyCThostFtdcMarketDataStaticField {
    PyObject_HEAD
    CThostFtdcMarketDataStaticField data;
} PyCThostFtdcMarketDataStaticField;

extern PyTypeObject PyCThostFtdcMarketDataStaticFieldType;

extern int PyCThostFtdcMarketDataStaticFieldType_init(PyObject *module);

#endif
