#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询货币质押流水

typedef struct PyCThostFtdcQrySyncFundMortgageField {
    PyObject_HEAD
    CThostFtdcQrySyncFundMortgageField data;
} PyCThostFtdcQrySyncFundMortgageField;

extern PyTypeObject PyCThostFtdcQrySyncFundMortgageFieldType;

extern int PyCThostFtdcQrySyncFundMortgageFieldType_init(PyObject *module);

#endif
