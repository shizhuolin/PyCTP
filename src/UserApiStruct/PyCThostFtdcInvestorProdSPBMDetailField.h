#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODSPBMDETAILFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODSPBMDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorProdSPBMDetailField {
    PyObject_HEAD
    CThostFtdcInvestorProdSPBMDetailField data;
} PyCThostFtdcInvestorProdSPBMDetailField;

extern PyTypeObject PyCThostFtdcInvestorProdSPBMDetailFieldType;

extern int PyCThostFtdcInvestorProdSPBMDetailFieldType_init(PyObject *module);

#endif
