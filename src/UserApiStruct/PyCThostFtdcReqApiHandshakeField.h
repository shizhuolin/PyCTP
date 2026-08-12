#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///api握手请求

typedef struct PyCThostFtdcReqApiHandshakeField {
    PyObject_HEAD
    CThostFtdcReqApiHandshakeField data;
} PyCThostFtdcReqApiHandshakeField;

extern PyTypeObject PyCThostFtdcReqApiHandshakeFieldType;

extern int PyCThostFtdcReqApiHandshakeFieldType_init(PyObject *module);

#endif
