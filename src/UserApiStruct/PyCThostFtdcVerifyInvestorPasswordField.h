#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYINVESTORPASSWORDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYINVESTORPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///校验投资者密码

typedef struct PyCThostFtdcVerifyInvestorPasswordField {
    PyObject_HEAD
    CThostFtdcVerifyInvestorPasswordField data;
} PyCThostFtdcVerifyInvestorPasswordField;

extern PyTypeObject PyCThostFtdcVerifyInvestorPasswordFieldType;

extern int PyCThostFtdcVerifyInvestorPasswordFieldType_init(PyObject *module);

#endif
