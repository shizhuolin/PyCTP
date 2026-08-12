#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRTRADECOSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRTRADECOSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权交易成本

typedef struct PyCThostFtdcOptionInstrTradeCostField {
    PyObject_HEAD
    CThostFtdcOptionInstrTradeCostField data;
} PyCThostFtdcOptionInstrTradeCostField;

extern PyTypeObject PyCThostFtdcOptionInstrTradeCostFieldType;

extern int PyCThostFtdcOptionInstrTradeCostFieldType_init(PyObject *module);

#endif
