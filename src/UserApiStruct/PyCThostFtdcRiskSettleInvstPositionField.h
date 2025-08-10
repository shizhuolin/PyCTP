#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKSETTLEINVSTPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKSETTLEINVSTPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算持仓

typedef struct PyCThostFtdcRiskSettleInvstPositionField {
    PyObject_HEAD
    CThostFtdcRiskSettleInvstPositionField data;
} PyCThostFtdcRiskSettleInvstPositionField;

extern PyTypeObject PyCThostFtdcRiskSettleInvstPositionFieldType;

extern int PyCThostFtdcRiskSettleInvstPositionFieldType_init(PyObject *module);

#endif
