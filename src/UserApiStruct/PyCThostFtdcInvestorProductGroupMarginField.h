#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorProductGroupMarginField {
    PyObject_HEAD
    CThostFtdcInvestorProductGroupMarginField data;
} PyCThostFtdcInvestorProductGroupMarginField;

extern PyTypeObject PyCThostFtdcInvestorProductGroupMarginFieldType;

extern int PyCThostFtdcInvestorProductGroupMarginFieldType_init(PyObject *module);

#endif
