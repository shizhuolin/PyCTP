#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORCOMMODITYSPMMMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者商品组SPMM记录

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorCommoditySPMMMarginField data;
} PyCThostFtdcInvestorCommoditySPMMMarginFieldData;

extern PyTypeObject *PyCThostFtdcInvestorCommoditySPMMMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorCommoditySPMMMarginFieldType_exec(PyObject *module);

#endif