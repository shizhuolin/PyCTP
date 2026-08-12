#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMMINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMMINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询做市商合约手续费率

typedef struct PyCThostFtdcQryMMInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcQryMMInstrumentCommissionRateField data;
} PyCThostFtdcQryMMInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcQryMMInstrumentCommissionRateFieldType;

extern int PyCThostFtdcQryMMInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
