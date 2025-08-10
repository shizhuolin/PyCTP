#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司可提资金算法表

typedef struct PyCThostFtdcInvestorWithdrawAlgorithmField {
    PyObject_HEAD
    CThostFtdcInvestorWithdrawAlgorithmField data;
} PyCThostFtdcInvestorWithdrawAlgorithmField;

extern PyTypeObject PyCThostFtdcInvestorWithdrawAlgorithmFieldType;

extern int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(PyObject *module);

#endif
