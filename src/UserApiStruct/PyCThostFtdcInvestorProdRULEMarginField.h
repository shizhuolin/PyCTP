#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODRULEMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPRODRULEMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者产品RULE保证金

typedef struct PyCThostFtdcInvestorProdRULEMarginField {
    PyObject_HEAD
    CThostFtdcInvestorProdRULEMarginField data;
} PyCThostFtdcInvestorProdRULEMarginField;

extern PyTypeObject PyCThostFtdcInvestorProdRULEMarginFieldType;

extern int PyCThostFtdcInvestorProdRULEMarginFieldType_init(PyObject *module);

#endif
