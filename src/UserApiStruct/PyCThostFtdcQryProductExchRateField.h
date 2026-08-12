#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTEXCHRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///产品报价汇率查询

typedef struct PyCThostFtdcQryProductExchRateField {
    PyObject_HEAD
    CThostFtdcQryProductExchRateField data;
} PyCThostFtdcQryProductExchRateField;

extern PyTypeObject PyCThostFtdcQryProductExchRateFieldType;

extern int PyCThostFtdcQryProductExchRateFieldType_init(PyObject *module);

#endif
