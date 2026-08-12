#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约手续费率

typedef struct PyCThostFtdcInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcInstrumentCommissionRateField data;
} PyCThostFtdcInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcInstrumentCommissionRateFieldType;

extern int PyCThostFtdcInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
