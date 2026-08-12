#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYBANKACCOUNTBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYBANKACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次席查询银行资金帐户信息回报

typedef struct PyCThostFtdcRspQueryBankAccountBySecField {
    PyObject_HEAD
    CThostFtdcRspQueryBankAccountBySecField data;
} PyCThostFtdcRspQueryBankAccountBySecField;

extern PyTypeObject PyCThostFtdcRspQueryBankAccountBySecFieldType;

extern int PyCThostFtdcRspQueryBankAccountBySecFieldType_init(PyObject *module);

#endif
