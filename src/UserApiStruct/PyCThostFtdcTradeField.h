#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///成交

typedef struct PyCThostFtdcTradeField {
    PyObject_HEAD
    CThostFtdcTradeField data;
} PyCThostFtdcTradeField;

extern PyTypeObject PyCThostFtdcTradeFieldType;

extern int PyCThostFtdcTradeFieldType_init(PyObject *module);

#endif
