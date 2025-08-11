#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCONTRACTBANKFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCONTRACTBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcContractBankField {
    PyObject_HEAD
    CThostFtdcContractBankField data;
} PyCThostFtdcContractBankField;

extern PyTypeObject PyCThostFtdcContractBankFieldType;

extern int PyCThostFtdcContractBankFieldType_init(PyObject *module);

#endif
