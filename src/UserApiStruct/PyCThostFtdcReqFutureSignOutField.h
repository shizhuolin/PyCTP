#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQFUTURESIGNOUTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqFutureSignOutField {
    PyObject_HEAD
    CThostFtdcReqFutureSignOutField data;
} PyCThostFtdcReqFutureSignOutField;

extern PyTypeObject PyCThostFtdcReqFutureSignOutFieldType;

extern int PyCThostFtdcReqFutureSignOutFieldType_init(PyObject *module);

#endif
