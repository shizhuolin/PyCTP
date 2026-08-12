#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERWITHDRAWALGORITHMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERWITHDRAWALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司可提资金算法表

typedef struct PyCThostFtdcBrokerWithdrawAlgorithmField {
    PyObject_HEAD
    CThostFtdcBrokerWithdrawAlgorithmField data;
} PyCThostFtdcBrokerWithdrawAlgorithmField;

extern PyTypeObject PyCThostFtdcBrokerWithdrawAlgorithmFieldType;

extern int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init(PyObject *module);

#endif
