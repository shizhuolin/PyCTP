#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOCALADDRCONFIGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOCALADDRCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcLocalAddrConfigField {
    PyObject_HEAD
    CThostFtdcLocalAddrConfigField data;
} PyCThostFtdcLocalAddrConfigField;

extern PyTypeObject PyCThostFtdcLocalAddrConfigFieldType;

extern int PyCThostFtdcLocalAddrConfigFieldType_init(PyObject *module);

#endif
