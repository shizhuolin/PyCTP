#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGESEQUENCEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGESEQUENCEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所状态

typedef struct PyCThostFtdcExchangeSequenceField {
    PyObject_HEAD
    CThostFtdcExchangeSequenceField data;
} PyCThostFtdcExchangeSequenceField;

extern PyTypeObject PyCThostFtdcExchangeSequenceFieldType;

extern int PyCThostFtdcExchangeSequenceFieldType_init(PyObject *module);

#endif
