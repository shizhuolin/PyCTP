#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorField {
    PyObject_HEAD
    CThostFtdcInvestorField data;
} PyCThostFtdcInvestorField;

extern PyTypeObject PyCThostFtdcInvestorFieldType;

extern int PyCThostFtdcInvestorFieldType_init(PyObject *module);

#endif
