#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///做市商合约手续费率

typedef struct PyCThostFtdcMMInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcMMInstrumentCommissionRateField data;
} PyCThostFtdcMMInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcMMInstrumentCommissionRateFieldType;

extern int PyCThostFtdcMMInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
