#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTREGISTERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTREGISTERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户开销户信息表

typedef struct PyCThostFtdcAccountregisterField {
    PyObject_HEAD
    CThostFtdcAccountregisterField data;
} PyCThostFtdcAccountregisterField;

extern PyTypeObject PyCThostFtdcAccountregisterFieldType;

extern int PyCThostFtdcAccountregisterFieldType_init(PyObject *module);

#endif
