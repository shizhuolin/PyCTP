#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前银期所属交易中心

typedef struct PyCThostFtdcCurrTransferIdentityField {
    PyObject_HEAD
    CThostFtdcCurrTransferIdentityField data;
} PyCThostFtdcCurrTransferIdentityField;

extern PyTypeObject PyCThostFtdcCurrTransferIdentityFieldType;

extern int PyCThostFtdcCurrTransferIdentityFieldType_init(PyObject *module);

#endif
