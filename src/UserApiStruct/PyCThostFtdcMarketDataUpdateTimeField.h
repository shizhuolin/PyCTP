#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情更新时间属性

typedef struct PyCThostFtdcMarketDataUpdateTimeField {
    PyObject_HEAD
    CThostFtdcMarketDataUpdateTimeField data;
} PyCThostFtdcMarketDataUpdateTimeField;

extern PyTypeObject PyCThostFtdcMarketDataUpdateTimeFieldType;

extern int PyCThostFtdcMarketDataUpdateTimeFieldType_init(PyObject *module);

#endif
