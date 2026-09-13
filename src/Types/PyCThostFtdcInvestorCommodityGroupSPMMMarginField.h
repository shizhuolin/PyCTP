#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品群SPMM记录

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorCommodityGroupSPMMMarginField data;
} PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldData;

extern PyTypeObject *PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorCommodityGroupSPMMMarginFieldType_exec(PyObject *module);

#endif