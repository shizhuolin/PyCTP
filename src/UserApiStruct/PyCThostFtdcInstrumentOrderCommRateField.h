#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTORDERCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTORDERCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInstrumentOrderCommRateField {
    PyObject_HEAD
    CThostFtdcInstrumentOrderCommRateField data;
} PyCThostFtdcInstrumentOrderCommRateField;

extern PyTypeObject PyCThostFtdcInstrumentOrderCommRateFieldType;

extern int PyCThostFtdcInstrumentOrderCommRateFieldType_init(PyObject *module);

#endif
