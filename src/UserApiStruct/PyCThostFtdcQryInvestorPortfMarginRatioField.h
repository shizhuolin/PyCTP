#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorPortfMarginRatioField {
    PyObject_HEAD
    CThostFtdcQryInvestorPortfMarginRatioField data;
} PyCThostFtdcQryInvestorPortfMarginRatioField;

extern PyTypeObject PyCThostFtdcQryInvestorPortfMarginRatioFieldType;

extern int PyCThostFtdcQryInvestorPortfMarginRatioFieldType_init(PyObject *module);

#endif
