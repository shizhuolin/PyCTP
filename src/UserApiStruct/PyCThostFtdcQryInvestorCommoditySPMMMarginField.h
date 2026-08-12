#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORCOMMODITYSPMMMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORCOMMODITYSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品组SPMM记录查询

typedef struct PyCThostFtdcQryInvestorCommoditySPMMMarginField {
    PyObject_HEAD
    CThostFtdcQryInvestorCommoditySPMMMarginField data;
} PyCThostFtdcQryInvestorCommoditySPMMMarginField;

extern PyTypeObject PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType;

extern int PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_init(PyObject *module);

#endif
