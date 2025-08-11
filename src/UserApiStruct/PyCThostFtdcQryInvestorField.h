#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInvestorField {
    PyObject_HEAD
    CThostFtdcQryInvestorField data;
} PyCThostFtdcQryInvestorField;

extern PyTypeObject PyCThostFtdcQryInvestorFieldType;

extern int PyCThostFtdcQryInvestorFieldType_init(PyObject *module);

#endif
