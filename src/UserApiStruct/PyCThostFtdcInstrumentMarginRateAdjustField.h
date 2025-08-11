#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEADJUSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTMARGINRATEADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInstrumentMarginRateAdjustField {
    PyObject_HEAD
    CThostFtdcInstrumentMarginRateAdjustField data;
} PyCThostFtdcInstrumentMarginRateAdjustField;

extern PyTypeObject PyCThostFtdcInstrumentMarginRateAdjustFieldType;

extern int PyCThostFtdcInstrumentMarginRateAdjustFieldType_init(PyObject *module);

#endif
