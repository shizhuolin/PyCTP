#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountField data;
} PyCThostFtdcTradingAccountFieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountFieldType_exec(PyObject *module);

#endif