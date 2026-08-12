#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODUCTGROUPMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODUCTGROUPMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者品种/跨品种保证金

typedef struct PyCThostFtdcQryInvestorProductGroupMarginField {
    PyObject_HEAD
    CThostFtdcQryInvestorProductGroupMarginField data;
} PyCThostFtdcQryInvestorProductGroupMarginField;

extern PyTypeObject PyCThostFtdcQryInvestorProductGroupMarginFieldType;

extern int PyCThostFtdcQryInvestorProductGroupMarginFieldType_init(PyObject *module);

#endif
