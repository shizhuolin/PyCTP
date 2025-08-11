#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODSPBMDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODSPBMDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorProdSPBMDetailField {
    PyObject_HEAD
    CThostFtdcQryInvestorProdSPBMDetailField data;
} PyCThostFtdcQryInvestorProdSPBMDetailField;

extern PyTypeObject PyCThostFtdcQryInvestorProdSPBMDetailFieldType;

extern int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init(PyObject *module);

#endif
