#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTEXCHRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///产品报价汇率

typedef struct PyCThostFtdcProductExchRateField {
    PyObject_HEAD
    CThostFtdcProductExchRateField data;
} PyCThostFtdcProductExchRateField;

extern PyTypeObject PyCThostFtdcProductExchRateFieldType;

extern int PyCThostFtdcProductExchRateFieldType_init(PyObject *module);

#endif
