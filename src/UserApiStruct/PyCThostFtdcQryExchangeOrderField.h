#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所报单

typedef struct PyCThostFtdcQryExchangeOrderField {
    PyObject_HEAD
    CThostFtdcQryExchangeOrderField data;
} PyCThostFtdcQryExchangeOrderField;

extern PyTypeObject PyCThostFtdcQryExchangeOrderFieldType;

extern int PyCThostFtdcQryExchangeOrderFieldType_init(PyObject *module);

#endif
