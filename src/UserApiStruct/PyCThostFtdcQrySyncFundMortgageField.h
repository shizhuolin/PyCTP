#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySyncFundMortgageField {
    PyObject_HEAD
    CThostFtdcQrySyncFundMortgageField data;
} PyCThostFtdcQrySyncFundMortgageField;

extern PyTypeObject PyCThostFtdcQrySyncFundMortgageFieldType;

extern int PyCThostFtdcQrySyncFundMortgageFieldType_init(PyObject *module);

#endif
