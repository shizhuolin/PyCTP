#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeOrderActionField {
    PyObject_HEAD
    CThostFtdcQryExchangeOrderActionField data;
} PyCThostFtdcQryExchangeOrderActionField;

extern PyTypeObject PyCThostFtdcQryExchangeOrderActionFieldType;

extern int PyCThostFtdcQryExchangeOrderActionFieldType_init(PyObject *module);

#endif
