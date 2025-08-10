#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTUNITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTUNITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资单元

typedef struct PyCThostFtdcQryInvestUnitField {
    PyObject_HEAD
    CThostFtdcQryInvestUnitField data;
} PyCThostFtdcQryInvestUnitField;

extern PyTypeObject PyCThostFtdcQryInvestUnitFieldType;

extern int PyCThostFtdcQryInvestUnitFieldType_init(PyObject *module);

#endif
