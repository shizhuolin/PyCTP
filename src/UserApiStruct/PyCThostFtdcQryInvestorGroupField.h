#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORGROUPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者组

typedef struct PyCThostFtdcQryInvestorGroupField {
    PyObject_HEAD
    CThostFtdcQryInvestorGroupField data;
} PyCThostFtdcQryInvestorGroupField;

extern PyTypeObject PyCThostFtdcQryInvestorGroupFieldType;

extern int PyCThostFtdcQryInvestorGroupFieldType_init(PyObject *module);

#endif
