#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspApiHandshakeField {
    PyObject_HEAD
    CThostFtdcRspApiHandshakeField data;
} PyCThostFtdcRspApiHandshakeField;

extern PyTypeObject PyCThostFtdcRspApiHandshakeFieldType;

extern int PyCThostFtdcRspApiHandshakeFieldType_init(PyObject *module);

#endif
