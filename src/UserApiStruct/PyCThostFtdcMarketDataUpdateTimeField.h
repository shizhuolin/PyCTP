#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataUpdateTimeField {
    PyObject_HEAD
    CThostFtdcMarketDataUpdateTimeField data;
} PyCThostFtdcMarketDataUpdateTimeField;

extern PyTypeObject PyCThostFtdcMarketDataUpdateTimeFieldType;

extern int PyCThostFtdcMarketDataUpdateTimeFieldType_init(PyObject *module);

#endif
