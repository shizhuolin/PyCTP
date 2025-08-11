#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATALASTMATCHFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMARKETDATALASTMATCHFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMarketDataLastMatchField {
    PyObject_HEAD
    CThostFtdcMarketDataLastMatchField data;
} PyCThostFtdcMarketDataLastMatchField;

extern PyTypeObject PyCThostFtdcMarketDataLastMatchFieldType;

extern int PyCThostFtdcMarketDataLastMatchFieldType_init(PyObject *module);

#endif
