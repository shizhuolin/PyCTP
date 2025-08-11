#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcProductField {
    PyObject_HEAD
    CThostFtdcProductField data;
} PyCThostFtdcProductField;

extern PyTypeObject PyCThostFtdcProductFieldType;

extern int PyCThostFtdcProductFieldType_init(PyObject *module);

#endif
