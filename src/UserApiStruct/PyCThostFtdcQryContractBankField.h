#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCONTRACTBANKFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCONTRACTBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryContractBankField {
    PyObject_HEAD
    CThostFtdcQryContractBankField data;
} PyCThostFtdcQryContractBankField;

extern PyTypeObject PyCThostFtdcQryContractBankFieldType;

extern int PyCThostFtdcQryContractBankFieldType_init(PyObject *module);

#endif
