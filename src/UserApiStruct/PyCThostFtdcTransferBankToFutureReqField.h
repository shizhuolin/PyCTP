#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTUREREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferBankToFutureReqField {
    PyObject_HEAD
    CThostFtdcTransferBankToFutureReqField data;
} PyCThostFtdcTransferBankToFutureReqField;

extern PyTypeObject PyCThostFtdcTransferBankToFutureReqFieldType;

extern int PyCThostFtdcTransferBankToFutureReqFieldType_init(PyObject *module);

#endif
