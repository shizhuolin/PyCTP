#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者品种/跨品种保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorProductGroupMarginField data;
} PyCThostFtdcInvestorProductGroupMarginFieldData;

extern PyTypeObject *PyCThostFtdcInvestorProductGroupMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorProductGroupMarginFieldType_exec(PyObject *module);

#endif