#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqApiHandshakeField {
    PyObject_HEAD
    CThostFtdcReqApiHandshakeField data;
} PyCThostFtdcReqApiHandshakeField;

extern PyTypeObject PyCThostFtdcReqApiHandshakeFieldType;

extern int PyCThostFtdcReqApiHandshakeFieldType_init(PyObject *module);

#endif
