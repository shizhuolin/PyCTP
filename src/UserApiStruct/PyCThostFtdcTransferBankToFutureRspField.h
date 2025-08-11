#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKTOFUTURERSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferBankToFutureRspField {
    PyObject_HEAD
    CThostFtdcTransferBankToFutureRspField data;
} PyCThostFtdcTransferBankToFutureRspField;

extern PyTypeObject PyCThostFtdcTransferBankToFutureRspFieldType;

extern int PyCThostFtdcTransferBankToFutureRspFieldType_init(PyObject *module);

#endif
