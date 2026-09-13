#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODRULEMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPRODRULEMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者产品RULE保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorProdRULEMarginField data;
} PyCThostFtdcInvestorProdRULEMarginFieldData;

extern PyTypeObject *PyCThostFtdcInvestorProdRULEMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorProdRULEMarginFieldType_exec(PyObject *module);

#endif