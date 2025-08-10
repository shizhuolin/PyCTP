#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所

typedef struct PyCThostFtdcQryExchangeField {
    PyObject_HEAD
    CThostFtdcQryExchangeField data;
} PyCThostFtdcQryExchangeField;

extern PyTypeObject PyCThostFtdcQryExchangeFieldType;

extern int PyCThostFtdcQryExchangeFieldType_init(PyObject *module);

#endif
