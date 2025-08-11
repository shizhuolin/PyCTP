#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField {
    PyObject_HEAD
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField data;
} PyCThostFtdcQryInvestorCommodityGroupSPMMMarginField;

extern PyTypeObject PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType;

extern int PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_init(PyObject *module);

#endif
