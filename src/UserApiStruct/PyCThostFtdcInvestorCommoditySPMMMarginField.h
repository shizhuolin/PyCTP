#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorCommoditySPMMMarginField {
    PyObject_HEAD
    CThostFtdcInvestorCommoditySPMMMarginField data;
} PyCThostFtdcInvestorCommoditySPMMMarginField;

extern PyTypeObject PyCThostFtdcInvestorCommoditySPMMMarginFieldType;

extern int PyCThostFtdcInvestorCommoditySPMMMarginFieldType_init(PyObject *module);

#endif
