#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODRULEMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODRULEMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者产品RULE保证金查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorProdRULEMarginField data;
} PyCThostFtdcQryInvestorProdRULEMarginFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorProdRULEMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorProdRULEMarginFieldType_exec(PyObject *module);

#endif