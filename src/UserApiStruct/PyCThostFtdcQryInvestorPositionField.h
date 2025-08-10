#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者持仓

typedef struct PyCThostFtdcQryInvestorPositionField {
    PyObject_HEAD
    CThostFtdcQryInvestorPositionField data;
} PyCThostFtdcQryInvestorPositionField;

extern PyTypeObject PyCThostFtdcQryInvestorPositionFieldType;

extern int PyCThostFtdcQryInvestorPositionFieldType_init(PyObject *module);

#endif
