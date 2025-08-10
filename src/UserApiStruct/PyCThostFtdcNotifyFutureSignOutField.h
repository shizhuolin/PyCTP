#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYFUTURESIGNOUTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签退通知

typedef struct PyCThostFtdcNotifyFutureSignOutField {
    PyObject_HEAD
    CThostFtdcNotifyFutureSignOutField data;
} PyCThostFtdcNotifyFutureSignOutField;

extern PyTypeObject PyCThostFtdcNotifyFutureSignOutFieldType;

extern int PyCThostFtdcNotifyFutureSignOutFieldType_init(PyObject *module);

#endif
