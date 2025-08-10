#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKSETTLEPRODUCTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKSETTLEPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险品种

typedef struct PyCThostFtdcRiskSettleProductStatusField {
    PyObject_HEAD
    CThostFtdcRiskSettleProductStatusField data;
} PyCThostFtdcRiskSettleProductStatusField;

extern PyTypeObject PyCThostFtdcRiskSettleProductStatusFieldType;

extern int PyCThostFtdcRiskSettleProductStatusFieldType_init(PyObject *module);

#endif
