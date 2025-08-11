#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODRULEMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPRODRULEMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorProdRULEMarginField {
    PyObject_HEAD
    CThostFtdcQryInvestorProdRULEMarginField data;
} PyCThostFtdcQryInvestorProdRULEMarginField;

extern PyTypeObject PyCThostFtdcQryInvestorProdRULEMarginFieldType;

extern int PyCThostFtdcQryInvestorProdRULEMarginFieldType_init(PyObject *module);

#endif
