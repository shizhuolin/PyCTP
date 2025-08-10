#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKRSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行资金请求响应

typedef struct PyCThostFtdcTransferQryBankRspField {
    PyObject_HEAD
    CThostFtdcTransferQryBankRspField data;
} PyCThostFtdcTransferQryBankRspField;

extern PyTypeObject PyCThostFtdcTransferQryBankRspFieldType;

extern int PyCThostFtdcTransferQryBankRspFieldType_init(PyObject *module);

#endif
