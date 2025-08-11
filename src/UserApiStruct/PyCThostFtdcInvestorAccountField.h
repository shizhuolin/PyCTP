#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorAccountField {
    PyObject_HEAD
    CThostFtdcInvestorAccountField data;
} PyCThostFtdcInvestorAccountField;

extern PyTypeObject PyCThostFtdcInvestorAccountFieldType;

extern int PyCThostFtdcInvestorAccountFieldType_init(PyObject *module);

#endif
