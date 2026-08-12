#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算持仓查询

typedef struct PyCThostFtdcQryRiskSettleInvstPositionField {
    PyObject_HEAD
    CThostFtdcQryRiskSettleInvstPositionField data;
} PyCThostFtdcQryRiskSettleInvstPositionField;

extern PyTypeObject PyCThostFtdcQryRiskSettleInvstPositionFieldType;

extern int PyCThostFtdcQryRiskSettleInvstPositionFieldType_init(PyObject *module);

#endif
