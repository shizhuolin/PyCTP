#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///验证期货资金密码和客户信息

typedef struct PyCThostFtdcVerifyFuturePasswordAndCustInfoField {
    PyObject_HEAD
    CThostFtdcVerifyFuturePasswordAndCustInfoField data;
} PyCThostFtdcVerifyFuturePasswordAndCustInfoField;

extern PyTypeObject PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType;

extern int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(PyObject *module);

#endif
