#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBINATIONLEGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBINATIONLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合交易合约的单腿

typedef struct PyCThostFtdcCombinationLegField {
    PyObject_HEAD
    CThostFtdcCombinationLegField data;
} PyCThostFtdcCombinationLegField;

extern PyTypeObject PyCThostFtdcCombinationLegFieldType;

extern int PyCThostFtdcCombinationLegFieldType_init(PyObject *module);

#endif
