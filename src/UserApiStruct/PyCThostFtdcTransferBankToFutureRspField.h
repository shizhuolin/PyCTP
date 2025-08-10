#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行资金转期货请求响应

typedef struct PyCThostFtdcTransferBankToFutureRspField {
    PyObject_HEAD
    CThostFtdcTransferBankToFutureRspField data;
} PyCThostFtdcTransferBankToFutureRspField;

extern PyTypeObject PyCThostFtdcTransferBankToFutureRspFieldType;

extern int PyCThostFtdcTransferBankToFutureRspFieldType_init(PyObject *module);

#endif
