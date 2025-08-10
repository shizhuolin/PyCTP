#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所期权自对冲操作

typedef struct PyCThostFtdcExchangeOptionSelfCloseActionField {
    PyObject_HEAD
    CThostFtdcExchangeOptionSelfCloseActionField data;
} PyCThostFtdcExchangeOptionSelfCloseActionField;

extern PyTypeObject PyCThostFtdcExchangeOptionSelfCloseActionFieldType;

extern int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init(PyObject *module);

#endif
