#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeExecOrderActionField {
    PyObject_HEAD
    CThostFtdcQryExchangeExecOrderActionField data;
} PyCThostFtdcQryExchangeExecOrderActionField;

extern PyTypeObject PyCThostFtdcQryExchangeExecOrderActionFieldType;

extern int PyCThostFtdcQryExchangeExecOrderActionFieldType_init(PyObject *module);

#endif
