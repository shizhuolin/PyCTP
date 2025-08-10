#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易员

typedef struct PyCThostFtdcQryTraderField {
    PyObject_HEAD
    CThostFtdcQryTraderField data;
} PyCThostFtdcQryTraderField;

extern PyTypeObject PyCThostFtdcQryTraderFieldType;

extern int PyCThostFtdcQryTraderFieldType_init(PyObject *module);

#endif
