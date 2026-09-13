#ifndef PYCTP_TYPES_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///保证金监管系统经纪公司资金账户密钥

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCFMMCTradingAccountKeyField data;
} PyCThostFtdcCFMMCTradingAccountKeyFieldData;

extern PyTypeObject *PyCThostFtdcCFMMCTradingAccountKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountKeyFieldType_exec(PyObject *module);

#endif