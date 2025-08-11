#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYBANKACCOUNTBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYBANKACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqQueryBankAccountBySecField {
    PyObject_HEAD
    CThostFtdcReqQueryBankAccountBySecField data;
} PyCThostFtdcReqQueryBankAccountBySecField;

extern PyTypeObject PyCThostFtdcReqQueryBankAccountBySecFieldType;

extern int PyCThostFtdcReqQueryBankAccountBySecFieldType_init(PyObject *module);

#endif
