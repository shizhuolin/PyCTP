#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约保证金率

typedef struct PyCThostFtdcSyncingInstrumentMarginRateField {
    PyObject_HEAD
    CThostFtdcSyncingInstrumentMarginRateField data;
} PyCThostFtdcSyncingInstrumentMarginRateField;

extern PyTypeObject PyCThostFtdcSyncingInstrumentMarginRateFieldType;

extern int PyCThostFtdcSyncingInstrumentMarginRateFieldType_init(PyObject *module);

#endif
