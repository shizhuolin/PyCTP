#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDISCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcDiscountField {
    PyObject_HEAD
    CThostFtdcDiscountField data;
} PyCThostFtdcDiscountField;

extern PyTypeObject PyCThostFtdcDiscountFieldType;

extern int PyCThostFtdcDiscountFieldType_init(PyObject *module);

#endif
