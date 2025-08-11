#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcVerifyFuturePasswordAndCustInfoField {
    PyObject_HEAD
    CThostFtdcVerifyFuturePasswordAndCustInfoField data;
} PyCThostFtdcVerifyFuturePasswordAndCustInfoField;

extern PyTypeObject PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType;

extern int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(PyObject *module);

#endif
