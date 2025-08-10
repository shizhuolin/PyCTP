#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行资金请求，TradeCode=204002

typedef struct PyCThostFtdcTransferQryBankReqField {
    PyObject_HEAD
    CThostFtdcTransferQryBankReqField data;
} PyCThostFtdcTransferQryBankReqField;

extern PyTypeObject PyCThostFtdcTransferQryBankReqFieldType;

extern int PyCThostFtdcTransferQryBankReqFieldType_init(PyObject *module);

#endif
