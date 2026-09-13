#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODRCAMSMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODRCAMSMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者品种RCAMS保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorProdRCAMSMarginField data;
} PyCThostFtdcInvestorProdRCAMSMarginFieldData;

extern PyTypeObject *PyCThostFtdcInvestorProdRCAMSMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorProdRCAMSMarginFieldType_exec(PyObject *module);

#endif