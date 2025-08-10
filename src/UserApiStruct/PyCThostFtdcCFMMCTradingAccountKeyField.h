#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCTRADINGACCOUNTKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///保证金监管系统经纪公司资金账户密钥

typedef struct PyCThostFtdcCFMMCTradingAccountKeyField {
    PyObject_HEAD
    CThostFtdcCFMMCTradingAccountKeyField data;
} PyCThostFtdcCFMMCTradingAccountKeyField;

extern PyTypeObject PyCThostFtdcCFMMCTradingAccountKeyFieldType;

extern int PyCThostFtdcCFMMCTradingAccountKeyFieldType_init(PyObject *module);

#endif
