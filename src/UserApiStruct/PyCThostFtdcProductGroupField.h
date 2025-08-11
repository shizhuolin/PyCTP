#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTGROUPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPRODUCTGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcProductGroupField {
    PyObject_HEAD
    CThostFtdcProductGroupField data;
} PyCThostFtdcProductGroupField;

extern PyTypeObject PyCThostFtdcProductGroupFieldType;

extern int PyCThostFtdcProductGroupFieldType_init(PyObject *module);

#endif
