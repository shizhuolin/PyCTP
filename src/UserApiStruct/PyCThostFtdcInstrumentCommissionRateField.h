#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInstrumentCommissionRateField {
    PyObject_HEAD
    CThostFtdcInstrumentCommissionRateField data;
} PyCThostFtdcInstrumentCommissionRateField;

extern PyTypeObject PyCThostFtdcInstrumentCommissionRateFieldType;

extern int PyCThostFtdcInstrumentCommissionRateFieldType_init(PyObject *module);

#endif
