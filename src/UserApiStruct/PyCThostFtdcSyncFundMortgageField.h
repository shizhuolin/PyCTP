#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCFUNDMORTGAGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCFUNDMORTGAGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncFundMortgageField {
    PyObject_HEAD
    CThostFtdcSyncFundMortgageField data;
} PyCThostFtdcSyncFundMortgageField;

extern PyTypeObject PyCThostFtdcSyncFundMortgageFieldType;

extern int PyCThostFtdcSyncFundMortgageFieldType_init(PyObject *module);

#endif
