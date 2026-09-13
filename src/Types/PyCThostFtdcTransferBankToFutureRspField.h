#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行资金转期货请求响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferBankToFutureRspField data;
} PyCThostFtdcTransferBankToFutureRspFieldData;

extern PyTypeObject *PyCThostFtdcTransferBankToFutureRspFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferBankToFutureRspFieldType_exec(PyObject *module);

#endif