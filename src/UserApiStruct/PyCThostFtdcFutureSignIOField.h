#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURESIGNIOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFUTURESIGNIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcFutureSignIOField {
    PyObject_HEAD
    CThostFtdcFutureSignIOField data;
} PyCThostFtdcFutureSignIOField;

extern PyTypeObject PyCThostFtdcFutureSignIOFieldType;

extern int PyCThostFtdcFutureSignIOFieldType_init(PyObject *module);

#endif
