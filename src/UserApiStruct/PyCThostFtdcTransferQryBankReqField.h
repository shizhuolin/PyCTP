#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYBANKREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferQryBankReqField {
    PyObject_HEAD
    CThostFtdcTransferQryBankReqField data;
} PyCThostFtdcTransferQryBankReqField;

extern PyTypeObject PyCThostFtdcTransferQryBankReqFieldType;

extern int PyCThostFtdcTransferQryBankReqFieldType_init(PyObject *module);

#endif
