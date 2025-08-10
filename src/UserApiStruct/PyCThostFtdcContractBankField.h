#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCONTRACTBANKFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCONTRACTBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询签约银行响应

typedef struct PyCThostFtdcContractBankField {
    PyObject_HEAD
    CThostFtdcContractBankField data;
} PyCThostFtdcContractBankField;

extern PyTypeObject PyCThostFtdcContractBankFieldType;

extern int PyCThostFtdcContractBankFieldType_init(PyObject *module);

#endif
