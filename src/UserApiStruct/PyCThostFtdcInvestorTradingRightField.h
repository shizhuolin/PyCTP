#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者交易权限设置

typedef struct PyCThostFtdcInvestorTradingRightField {
    PyObject_HEAD
    CThostFtdcInvestorTradingRightField data;
} PyCThostFtdcInvestorTradingRightField;

extern PyTypeObject PyCThostFtdcInvestorTradingRightFieldType;

extern int PyCThostFtdcInvestorTradingRightFieldType_init(PyObject *module);

#endif
