#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODRCAMSMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODRCAMSMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者品种RCAMS保证金查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorProdRCAMSMarginField data;
} PyCThostFtdcQryInvestorProdRCAMSMarginFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorProdRCAMSMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorProdRCAMSMarginFieldType_exec(PyObject *module);

#endif