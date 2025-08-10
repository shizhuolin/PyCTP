#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所期权自对冲信息

typedef struct PyCThostFtdcExchangeOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcExchangeOptionSelfCloseField data;
} PyCThostFtdcExchangeOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcExchangeOptionSelfCloseFieldType;

extern int PyCThostFtdcExchangeOptionSelfCloseFieldType_init(PyObject *module);

#endif
