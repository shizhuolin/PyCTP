#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所

typedef struct PyCThostFtdcExchangeField {
    PyObject_HEAD
    CThostFtdcExchangeField data;
} PyCThostFtdcExchangeField;

extern PyTypeObject PyCThostFtdcExchangeFieldType;

extern int PyCThostFtdcExchangeFieldType_init(PyObject *module);

#endif
