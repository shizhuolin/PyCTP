#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODRCAMSMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODRCAMSMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorProdRCAMSMarginField {
    PyObject_HEAD
    CThostFtdcInvestorProdRCAMSMarginField data;
} PyCThostFtdcInvestorProdRCAMSMarginField;

extern PyTypeObject PyCThostFtdcInvestorProdRCAMSMarginFieldType;

extern int PyCThostFtdcInvestorProdRCAMSMarginFieldType_init(PyObject *module);

#endif
