#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODRCAMSMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODRCAMSMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorProdRCAMSMarginField {
    PyObject_HEAD
    CThostFtdcQryInvestorProdRCAMSMarginField data;
} PyCThostFtdcQryInvestorProdRCAMSMarginField;

extern PyTypeObject PyCThostFtdcQryInvestorProdRCAMSMarginFieldType;

extern int PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_init(PyObject *module);

#endif
