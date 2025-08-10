#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所交易员

typedef struct PyCThostFtdcTraderField {
    PyObject_HEAD
    CThostFtdcTraderField data;
} PyCThostFtdcTraderField;

extern PyTypeObject PyCThostFtdcTraderFieldType;

extern int PyCThostFtdcTraderFieldType_init(PyObject *module);

#endif
