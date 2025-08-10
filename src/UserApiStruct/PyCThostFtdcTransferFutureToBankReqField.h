#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货资金转银行请求，TradeCode=202002

typedef struct PyCThostFtdcTransferFutureToBankReqField {
    PyObject_HEAD
    CThostFtdcTransferFutureToBankReqField data;
} PyCThostFtdcTransferFutureToBankReqField;

extern PyTypeObject PyCThostFtdcTransferFutureToBankReqFieldType;

extern int PyCThostFtdcTransferFutureToBankReqFieldType_init(PyObject *module);

#endif
