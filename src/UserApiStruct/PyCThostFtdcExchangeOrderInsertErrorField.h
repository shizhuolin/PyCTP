#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERINSERTERRORFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEORDERINSERTERRORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeOrderInsertErrorField {
    PyObject_HEAD
    CThostFtdcExchangeOrderInsertErrorField data;
} PyCThostFtdcExchangeOrderInsertErrorField;

extern PyTypeObject PyCThostFtdcExchangeOrderInsertErrorFieldType;

extern int PyCThostFtdcExchangeOrderInsertErrorFieldType_init(PyObject *module);

#endif
