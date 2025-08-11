#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPOSITIONDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorPositionDetailField {
    PyObject_HEAD
    CThostFtdcInvestorPositionDetailField data;
} PyCThostFtdcInvestorPositionDetailField;

extern PyTypeObject PyCThostFtdcInvestorPositionDetailFieldType;

extern int PyCThostFtdcInvestorPositionDetailFieldType_init(PyObject *module);

#endif
