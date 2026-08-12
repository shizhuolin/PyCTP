#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///新组保保证金系数投资者模板对应关系

typedef struct PyCThostFtdcInvestorPortfMarginModelField {
    PyObject_HEAD
    CThostFtdcInvestorPortfMarginModelField data;
} PyCThostFtdcInvestorPortfMarginModelField;

extern PyTypeObject PyCThostFtdcInvestorPortfMarginModelFieldType;

extern int PyCThostFtdcInvestorPortfMarginModelFieldType_init(PyObject *module);

#endif
