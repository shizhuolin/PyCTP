#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约

typedef struct PyCThostFtdcInstrumentField {
    PyObject_HEAD
    CThostFtdcInstrumentField data;
} PyCThostFtdcInstrumentField;

extern PyTypeObject PyCThostFtdcInstrumentFieldType;

extern int PyCThostFtdcInstrumentFieldType_init(PyObject *module);

#endif
