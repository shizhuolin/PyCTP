#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeOrderField {
    PyObject_HEAD
    CThostFtdcExchangeOrderField data;
} PyCThostFtdcExchangeOrderField;

extern PyTypeObject PyCThostFtdcExchangeOrderFieldType;

extern int PyCThostFtdcExchangeOrderFieldType_init(PyObject *module);

#endif
