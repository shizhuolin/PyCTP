#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaDceCombInstrumentField {
    PyObject_HEAD
    CThostFtdcSyncDeltaDceCombInstrumentField data;
} PyCThostFtdcSyncDeltaDceCombInstrumentField;

extern PyTypeObject PyCThostFtdcSyncDeltaDceCombInstrumentFieldType;

extern int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(PyObject *module);

#endif
