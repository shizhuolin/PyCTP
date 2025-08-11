#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeExecOrderField {
    PyObject_HEAD
    CThostFtdcExchangeExecOrderField data;
} PyCThostFtdcExchangeExecOrderField;

extern PyTypeObject PyCThostFtdcExchangeExecOrderFieldType;

extern int PyCThostFtdcExchangeExecOrderFieldType_init(PyObject *module);

#endif
