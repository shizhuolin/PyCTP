#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRADINGACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询资金账户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTradingAccountField data;
} PyCThostFtdcQryTradingAccountFieldData;

extern PyTypeObject *PyCThostFtdcQryTradingAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTradingAccountFieldType_exec(PyObject *module);

#endif