#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODUCTGROUPMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPRODUCTGROUPMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者品种/跨品种保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorProductGroupMarginField data;
} PyCThostFtdcQryInvestorProductGroupMarginFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorProductGroupMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorProductGroupMarginFieldType_exec(PyObject *module);

#endif