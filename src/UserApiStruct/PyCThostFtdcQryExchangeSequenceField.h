#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGESEQUENCEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGESEQUENCEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeSequenceField {
    PyObject_HEAD
    CThostFtdcQryExchangeSequenceField data;
} PyCThostFtdcQryExchangeSequenceField;

extern PyTypeObject PyCThostFtdcQryExchangeSequenceFieldType;

extern int PyCThostFtdcQryExchangeSequenceFieldType_init(PyObject *module);

#endif
