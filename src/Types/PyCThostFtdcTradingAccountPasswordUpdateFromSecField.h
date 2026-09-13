#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFROMSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///来自次席的资金账户口令变更

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountPasswordUpdateFromSecField data;
} PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_exec(PyObject *module);

#endif