#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEXCHMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaExchMarginRateField {
    PyObject_HEAD
    CThostFtdcSyncDeltaExchMarginRateField data;
} PyCThostFtdcSyncDeltaExchMarginRateField;

extern PyTypeObject PyCThostFtdcSyncDeltaExchMarginRateFieldType;

extern int PyCThostFtdcSyncDeltaExchMarginRateFieldType_init(PyObject *module);

#endif
