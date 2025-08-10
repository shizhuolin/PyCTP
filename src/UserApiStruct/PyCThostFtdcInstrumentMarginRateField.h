#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约保证金率

typedef struct PyCThostFtdcInstrumentMarginRateField {
    PyObject_HEAD
    CThostFtdcInstrumentMarginRateField data;
} PyCThostFtdcInstrumentMarginRateField;

extern PyTypeObject PyCThostFtdcInstrumentMarginRateFieldType;

extern int PyCThostFtdcInstrumentMarginRateFieldType_init(PyObject *module);

#endif
