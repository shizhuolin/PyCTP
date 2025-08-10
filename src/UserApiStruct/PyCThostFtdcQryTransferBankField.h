#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRANSFERBANKFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRANSFERBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询转帐银行

typedef struct PyCThostFtdcQryTransferBankField {
    PyObject_HEAD
    CThostFtdcQryTransferBankField data;
} PyCThostFtdcQryTransferBankField;

extern PyTypeObject PyCThostFtdcQryTransferBankFieldType;

extern int PyCThostFtdcQryTransferBankFieldType_init(PyObject *module);

#endif
