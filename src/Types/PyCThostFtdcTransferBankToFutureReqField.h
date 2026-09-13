#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行资金转期货请求，TradeCode=202001

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferBankToFutureReqField data;
} PyCThostFtdcTransferBankToFutureReqFieldData;

extern PyTypeObject *PyCThostFtdcTransferBankToFutureReqFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferBankToFutureReqFieldType_exec(PyObject *module);

#endif