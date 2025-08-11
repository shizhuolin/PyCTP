#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINDEXPRICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINDEXPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcIndexPriceField {
    PyObject_HEAD
    CThostFtdcIndexPriceField data;
} PyCThostFtdcIndexPriceField;

extern PyTypeObject PyCThostFtdcIndexPriceFieldType;

extern int PyCThostFtdcIndexPriceFieldType_init(PyObject *module);

#endif
