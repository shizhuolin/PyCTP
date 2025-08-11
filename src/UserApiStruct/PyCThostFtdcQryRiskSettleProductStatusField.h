#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEPRODUCTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRiskSettleProductStatusField {
    PyObject_HEAD
    CThostFtdcQryRiskSettleProductStatusField data;
} PyCThostFtdcQryRiskSettleProductStatusField;

extern PyTypeObject PyCThostFtdcQryRiskSettleProductStatusFieldType;

extern int PyCThostFtdcQryRiskSettleProductStatusFieldType_init(PyObject *module);

#endif
