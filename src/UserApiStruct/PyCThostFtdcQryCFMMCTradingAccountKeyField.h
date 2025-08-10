#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCTRADINGACCOUNTKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCTRADINGACCOUNTKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询保证金监管系统经纪公司资金账户密钥

typedef struct PyCThostFtdcQryCFMMCTradingAccountKeyField {
    PyObject_HEAD
    CThostFtdcQryCFMMCTradingAccountKeyField data;
} PyCThostFtdcQryCFMMCTradingAccountKeyField;

extern PyTypeObject PyCThostFtdcQryCFMMCTradingAccountKeyFieldType;

extern int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init(PyObject *module);

#endif
