#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平组合优先级

typedef struct PyCThostFtdcSyncDeltaDceCombInstrumentField {
    PyObject_HEAD
    CThostFtdcSyncDeltaDceCombInstrumentField data;
} PyCThostFtdcSyncDeltaDceCombInstrumentField;

extern PyTypeObject PyCThostFtdcSyncDeltaDceCombInstrumentFieldType;

extern int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(PyObject *module);

#endif
