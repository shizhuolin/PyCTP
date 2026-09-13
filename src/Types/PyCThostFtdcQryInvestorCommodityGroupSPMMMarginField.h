#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORCOMMODITYGROUPSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品群SPMM记录查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorCommodityGroupSPMMMarginField data;
} PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorCommodityGroupSPMMMarginFieldType_exec(PyObject *module);

#endif