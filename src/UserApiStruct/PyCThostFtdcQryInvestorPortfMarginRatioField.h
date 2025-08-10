#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新型组合保证金系数查询

typedef struct PyCThostFtdcQryInvestorPortfMarginRatioField {
    PyObject_HEAD
    CThostFtdcQryInvestorPortfMarginRatioField data;
} PyCThostFtdcQryInvestorPortfMarginRatioField;

extern PyTypeObject PyCThostFtdcQryInvestorPortfMarginRatioFieldType;

extern int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init(PyObject *module);

#endif
