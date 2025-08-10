#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品群SPMM记录

typedef struct PyCThostFtdcInvestorCommodityGroupSPMMMarginField {
    PyObject_HEAD
    CThostFtdcInvestorCommodityGroupSPMMMarginField data;
} PyCThostFtdcInvestorCommodityGroupSPMMMarginField;

extern PyTypeObject PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType;

extern int PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *module);

#endif
