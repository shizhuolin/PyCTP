#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONCOMBINEDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONCOMBINEDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorPositionCombineDetailField {
    PyObject_HEAD
    CThostFtdcQryInvestorPositionCombineDetailField data;
} PyCThostFtdcQryInvestorPositionCombineDetailField;

extern PyTypeObject PyCThostFtdcQryInvestorPositionCombineDetailFieldType;

extern int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init(PyObject *module);

#endif
