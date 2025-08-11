#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorWithdrawAlgorithmField {
    PyObject_HEAD
    CThostFtdcInvestorWithdrawAlgorithmField data;
} PyCThostFtdcInvestorWithdrawAlgorithmField;

extern PyTypeObject PyCThostFtdcInvestorWithdrawAlgorithmFieldType;

extern int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(PyObject *module);

#endif
