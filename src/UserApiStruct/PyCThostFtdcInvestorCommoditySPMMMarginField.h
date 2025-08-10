#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品组SPMM记录

typedef struct PyCThostFtdcInvestorCommoditySPMMMarginField {
    PyObject_HEAD
    CThostFtdcInvestorCommoditySPMMMarginField data;
} PyCThostFtdcInvestorCommoditySPMMMarginField;

extern PyTypeObject PyCThostFtdcInvestorCommoditySPMMMarginFieldType;

extern int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(PyObject *module);

#endif
