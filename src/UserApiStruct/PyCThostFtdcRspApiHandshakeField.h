#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///front发给api的握手回复

typedef struct PyCThostFtdcRspApiHandshakeField {
    PyObject_HEAD
    CThostFtdcRspApiHandshakeField data;
} PyCThostFtdcRspApiHandshakeField;

extern PyTypeObject PyCThostFtdcRspApiHandshakeFieldType;

extern int PyCThostFtdcRspApiHandshakeFieldType_init(PyObject *module);

#endif
