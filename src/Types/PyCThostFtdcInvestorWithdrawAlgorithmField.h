#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORWITHDRAWALGORITHMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司可提资金算法表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorWithdrawAlgorithmField data;
} PyCThostFtdcInvestorWithdrawAlgorithmFieldData;

extern PyTypeObject *PyCThostFtdcInvestorWithdrawAlgorithmFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorWithdrawAlgorithmFieldType_exec(PyObject *module);

#endif