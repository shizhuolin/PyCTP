#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令变更域

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountPasswordUpdateField data;
} PyCThostFtdcTradingAccountPasswordUpdateFieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFieldType_exec(PyObject *module);

#endif