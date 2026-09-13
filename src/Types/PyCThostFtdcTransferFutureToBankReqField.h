#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERFUTURETOBANKREQFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERFUTURETOBANKREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货资金转银行请求，TradeCode=202002

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferFutureToBankReqField data;
} PyCThostFtdcTransferFutureToBankReqFieldData;

extern PyTypeObject *PyCThostFtdcTransferFutureToBankReqFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferFutureToBankReqFieldType_exec(PyObject *module);

#endif