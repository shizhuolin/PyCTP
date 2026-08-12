#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODUCTGROUPMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者品种/跨品种保证金

typedef struct PyCThostFtdcInvestorProductGroupMarginField {
    PyObject_HEAD
    CThostFtdcInvestorProductGroupMarginField data;
} PyCThostFtdcInvestorProductGroupMarginField;

extern PyTypeObject PyCThostFtdcInvestorProductGroupMarginFieldType;

extern int PyCThostFtdcInvestorProductGroupMarginFieldType_init(PyObject *module);

#endif
