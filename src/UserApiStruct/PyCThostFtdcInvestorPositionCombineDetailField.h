#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONCOMBINEDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONCOMBINEDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者组合持仓明细

typedef struct PyCThostFtdcInvestorPositionCombineDetailField {
    PyObject_HEAD
    CThostFtdcInvestorPositionCombineDetailField data;
} PyCThostFtdcInvestorPositionCombineDetailField;

extern PyTypeObject PyCThostFtdcInvestorPositionCombineDetailFieldType;

extern int PyCThostFtdcInvestorPositionCombineDetailFieldType_init(PyObject *module);

#endif
