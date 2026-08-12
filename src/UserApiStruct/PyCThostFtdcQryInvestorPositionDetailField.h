#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者持仓明细

typedef struct PyCThostFtdcQryInvestorPositionDetailField {
    PyObject_HEAD
    CThostFtdcQryInvestorPositionDetailField data;
} PyCThostFtdcQryInvestorPositionDetailField;

extern PyTypeObject PyCThostFtdcQryInvestorPositionDetailFieldType;

extern int PyCThostFtdcQryInvestorPositionDetailFieldType_init(PyObject *module);

#endif
