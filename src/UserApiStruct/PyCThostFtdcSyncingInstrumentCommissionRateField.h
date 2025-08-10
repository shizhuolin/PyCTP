#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约手续费率

typedef struct PyCThostFtdcSyncingInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcSyncingInstrumentCommissionRateField data;
} PyCThostFtdcSyncingInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcSyncingInstrumentCommissionRateFieldType;

extern int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
