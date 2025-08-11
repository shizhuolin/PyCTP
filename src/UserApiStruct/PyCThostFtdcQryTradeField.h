#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryTradeField {
    PyObject_HEAD
    CThostFtdcQryTradeField data;
} PyCThostFtdcQryTradeField;

extern PyTypeObject PyCThostFtdcQryTradeFieldType;

extern int PyCThostFtdcQryTradeFieldType_init(PyObject *module);

#endif
