#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询手续费率

typedef struct PyCThostFtdcQryInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcQryInstrumentCommissionRateField data;
} PyCThostFtdcQryInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcQryInstrumentCommissionRateFieldType;

extern int PyCThostFtdcQryInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
