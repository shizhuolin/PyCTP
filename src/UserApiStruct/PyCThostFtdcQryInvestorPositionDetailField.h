#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPOSITIONDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorPositionDetailField {
    PyObject_HEAD
    CThostFtdcQryInvestorPositionDetailField data;
} PyCThostFtdcQryInvestorPositionDetailField;

extern PyTypeObject PyCThostFtdcQryInvestorPositionDetailFieldType;

extern int PyCThostFtdcQryInvestorPositionDetailFieldType_init(PyObject *module);

#endif
