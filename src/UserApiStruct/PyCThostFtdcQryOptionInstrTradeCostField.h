#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRTRADECOSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRTRADECOSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权交易成本查询

typedef struct PyCThostFtdcQryOptionInstrTradeCostField {
    PyObject_HEAD
    CThostFtdcQryOptionInstrTradeCostField data;
} PyCThostFtdcQryOptionInstrTradeCostField;

extern PyTypeObject PyCThostFtdcQryOptionInstrTradeCostFieldType;

extern int PyCThostFtdcQryOptionInstrTradeCostFieldType_init(PyObject *module);

#endif
