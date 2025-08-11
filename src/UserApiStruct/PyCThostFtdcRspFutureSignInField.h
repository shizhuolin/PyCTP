#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPFUTURESIGNINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPFUTURESIGNINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspFutureSignInField {
    PyObject_HEAD
    CThostFtdcRspFutureSignInField data;
} PyCThostFtdcRspFutureSignInField;

extern PyTypeObject PyCThostFtdcRspFutureSignInFieldType;

extern int PyCThostFtdcRspFutureSignInFieldType_init(PyObject *module);

#endif
