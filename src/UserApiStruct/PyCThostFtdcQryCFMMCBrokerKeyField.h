#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCBROKERKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCFMMCBROKERKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCFMMCBrokerKeyField {
    PyObject_HEAD
    CThostFtdcQryCFMMCBrokerKeyField data;
} PyCThostFtdcQryCFMMCBrokerKeyField;

extern PyTypeObject PyCThostFtdcQryCFMMCBrokerKeyFieldType;

extern int PyCThostFtdcQryCFMMCBrokerKeyFieldType_init(PyObject *module);

#endif
