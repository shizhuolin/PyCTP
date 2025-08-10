#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///转帐银行

typedef struct PyCThostFtdcTransferBankField {
    PyObject_HEAD
    CThostFtdcTransferBankField data;
} PyCThostFtdcTransferBankField;

extern PyTypeObject PyCThostFtdcTransferBankFieldType;

extern int PyCThostFtdcTransferBankFieldType_init(PyObject *module);

#endif
