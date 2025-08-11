#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOCALADDRCONFIGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOCALADDRCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryLocalAddrConfigField {
    PyObject_HEAD
    CThostFtdcQryLocalAddrConfigField data;
} PyCThostFtdcQryLocalAddrConfigField;

extern PyTypeObject PyCThostFtdcQryLocalAddrConfigFieldType;

extern int PyCThostFtdcQryLocalAddrConfigFieldType_init(PyObject *module);

#endif
