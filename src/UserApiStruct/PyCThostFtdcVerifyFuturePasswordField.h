#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYFUTUREPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcVerifyFuturePasswordField {
    PyObject_HEAD
    CThostFtdcVerifyFuturePasswordField data;
} PyCThostFtdcVerifyFuturePasswordField;

extern PyTypeObject PyCThostFtdcVerifyFuturePasswordFieldType;

extern int PyCThostFtdcVerifyFuturePasswordFieldType_init(PyObject *module);

#endif
