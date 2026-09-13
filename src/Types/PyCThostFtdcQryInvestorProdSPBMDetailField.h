#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODSPBMDETAILFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODSPBMDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者产品SPBM明细查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorProdSPBMDetailField data;
} PyCThostFtdcQryInvestorProdSPBMDetailFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorProdSPBMDetailFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorProdSPBMDetailFieldType_exec(PyObject *module);

#endif