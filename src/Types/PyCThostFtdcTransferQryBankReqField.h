#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行资金请求，TradeCode=204002

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferQryBankReqField data;
} PyCThostFtdcTransferQryBankReqFieldData;

extern PyTypeObject *PyCThostFtdcTransferQryBankReqFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferQryBankReqFieldType_exec(PyObject *module);

#endif