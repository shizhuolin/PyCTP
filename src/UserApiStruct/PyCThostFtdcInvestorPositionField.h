#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者持仓

typedef struct PyCThostFtdcInvestorPositionField {
    PyObject_HEAD
    CThostFtdcInvestorPositionField data;
} PyCThostFtdcInvestorPositionField;

extern PyTypeObject PyCThostFtdcInvestorPositionFieldType;

extern int PyCThostFtdcInvestorPositionFieldType_init(PyObject *module);

#endif
