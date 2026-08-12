#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEULFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEULFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约保证金率调整

typedef struct PyCThostFtdcInstrumentMarginRateULField {
    PyObject_HEAD
    CThostFtdcInstrumentMarginRateULField data;
} PyCThostFtdcInstrumentMarginRateULField;

extern PyTypeObject PyCThostFtdcInstrumentMarginRateULFieldType;

extern int PyCThostFtdcInstrumentMarginRateULFieldType_init(PyObject *module);

#endif
