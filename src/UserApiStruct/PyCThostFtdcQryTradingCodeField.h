#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGCODEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易编码

typedef struct PyCThostFtdcQryTradingCodeField {
    PyObject_HEAD
    CThostFtdcQryTradingCodeField data;
} PyCThostFtdcQryTradingCodeField;

extern PyTypeObject PyCThostFtdcQryTradingCodeFieldType;

extern int PyCThostFtdcQryTradingCodeFieldType_init(PyObject *module);

#endif
