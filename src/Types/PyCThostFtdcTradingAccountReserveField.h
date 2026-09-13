#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户基本准备金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountReserveField data;
} PyCThostFtdcTradingAccountReserveFieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountReserveFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountReserveFieldType_exec(PyObject *module);

#endif