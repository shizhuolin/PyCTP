#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYFUTURESIGNINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYFUTURESIGNINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcNotifyFutureSignInField {
    PyObject_HEAD
    CThostFtdcNotifyFutureSignInField data;
} PyCThostFtdcNotifyFutureSignInField;

extern PyTypeObject PyCThostFtdcNotifyFutureSignInFieldType;

extern int PyCThostFtdcNotifyFutureSignInFieldType_init(PyObject *module);

#endif
