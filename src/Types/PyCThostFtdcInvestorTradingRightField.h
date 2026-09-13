#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者交易权限设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorTradingRightField data;
} PyCThostFtdcInvestorTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcInvestorTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorTradingRightFieldType_exec(PyObject *module);

#endif