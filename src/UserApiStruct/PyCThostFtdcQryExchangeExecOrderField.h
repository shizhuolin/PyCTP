#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeExecOrderField {
    PyObject_HEAD
    CThostFtdcQryExchangeExecOrderField data;
} PyCThostFtdcQryExchangeExecOrderField;

extern PyTypeObject PyCThostFtdcQryExchangeExecOrderFieldType;

extern int PyCThostFtdcQryExchangeExecOrderFieldType_init(PyObject *module);

#endif
