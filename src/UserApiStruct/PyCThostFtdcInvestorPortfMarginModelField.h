#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorPortfMarginModelField {
    PyObject_HEAD
    CThostFtdcInvestorPortfMarginModelField data;
} PyCThostFtdcInvestorPortfMarginModelField;

extern PyTypeObject PyCThostFtdcInvestorPortfMarginModelFieldType;

extern int PyCThostFtdcInvestorPortfMarginModelFieldType_init(PyObject *module);

#endif
