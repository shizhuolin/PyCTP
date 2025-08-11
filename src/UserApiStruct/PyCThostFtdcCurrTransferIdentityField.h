#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCurrTransferIdentityField {
    PyObject_HEAD
    CThostFtdcCurrTransferIdentityField data;
} PyCThostFtdcCurrTransferIdentityField;

extern PyTypeObject PyCThostFtdcCurrTransferIdentityFieldType;

extern int PyCThostFtdcCurrTransferIdentityFieldType_init(PyObject *module);

#endif
