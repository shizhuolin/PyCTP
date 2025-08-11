#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPOSITRESULTINFORMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDEPOSITRESULTINFORMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcDepositResultInformField {
    PyObject_HEAD
    CThostFtdcDepositResultInformField data;
} PyCThostFtdcDepositResultInformField;

extern PyTypeObject PyCThostFtdcDepositResultInformFieldType;

extern int PyCThostFtdcDepositResultInformFieldType_init(PyObject *module);

#endif
