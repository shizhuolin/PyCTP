#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODSPBMDETAILFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODSPBMDETAILFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者产品SPBM明细

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorProdSPBMDetailField data;
} PyCThostFtdcInvestorProdSPBMDetailFieldData;

extern PyTypeObject *PyCThostFtdcInvestorProdSPBMDetailFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorProdSPBMDetailFieldType_exec(PyObject *module);

#endif