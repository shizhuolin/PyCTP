#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcExchangeOptionSelfCloseField data;
} PyCThostFtdcExchangeOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcExchangeOptionSelfCloseFieldType;

extern int PyCThostFtdcExchangeOptionSelfCloseFieldType_init(PyObject *module);

#endif
