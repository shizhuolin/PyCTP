#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERACTIONERRORFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERACTIONERRORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeOrderActionErrorField {
    PyObject_HEAD
    CThostFtdcExchangeOrderActionErrorField data;
} PyCThostFtdcExchangeOrderActionErrorField;

extern PyTypeObject PyCThostFtdcExchangeOrderActionErrorFieldType;

extern int PyCThostFtdcExchangeOrderActionErrorFieldType_init(PyObject *module);

#endif
