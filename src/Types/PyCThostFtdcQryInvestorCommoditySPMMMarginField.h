#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORCOMMODITYSPMMMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORCOMMODITYSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品组SPMM记录查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorCommoditySPMMMarginField data;
} PyCThostFtdcQryInvestorCommoditySPMMMarginFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorCommoditySPMMMarginFieldType_exec(PyObject *module);

#endif