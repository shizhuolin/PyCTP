#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINRATIOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINRATIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新型组合保证金系数

typedef struct PyCThostFtdcInvestorPortfMarginRatioField {
    PyObject_HEAD
    CThostFtdcInvestorPortfMarginRatioField data;
} PyCThostFtdcInvestorPortfMarginRatioField;

extern PyTypeObject PyCThostFtdcInvestorPortfMarginRatioFieldType;

extern int PyCThostFtdcInvestorPortfMarginRatioFieldType_init(PyObject *module);

#endif
