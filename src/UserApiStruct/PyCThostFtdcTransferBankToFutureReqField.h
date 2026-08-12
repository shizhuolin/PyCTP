#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行资金转期货请求，TradeCode=202001

typedef struct PyCThostFtdcTransferBankToFutureReqField {
    PyObject_HEAD
    CThostFtdcTransferBankToFutureReqField data;
} PyCThostFtdcTransferBankToFutureReqField;

extern PyTypeObject PyCThostFtdcTransferBankToFutureReqFieldType;

extern int PyCThostFtdcTransferBankToFutureReqFieldType_init(PyObject *module);

#endif
