#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令域

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountPasswordField data;
} PyCThostFtdcTradingAccountPasswordFieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountPasswordFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordFieldType_exec(PyObject *module);

#endif