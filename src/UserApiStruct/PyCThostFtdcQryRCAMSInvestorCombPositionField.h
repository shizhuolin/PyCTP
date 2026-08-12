#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINVESTORCOMBPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINVESTORCOMBPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS策略组合持仓查询

typedef struct PyCThostFtdcQryRCAMSInvestorCombPositionField {
    PyObject_HEAD
    CThostFtdcQryRCAMSInvestorCombPositionField data;
} PyCThostFtdcQryRCAMSInvestorCombPositionField;

extern PyTypeObject PyCThostFtdcQryRCAMSInvestorCombPositionFieldType;

extern int PyCThostFtdcQryRCAMSInvestorCombPositionFieldType_init(PyObject *module);

#endif
