#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCFMMCBrokerKeyField {
    PyObject_HEAD
    CThostFtdcCFMMCBrokerKeyField data;
} PyCThostFtdcCFMMCBrokerKeyField;

extern PyTypeObject PyCThostFtdcCFMMCBrokerKeyFieldType;

extern int PyCThostFtdcCFMMCBrokerKeyFieldType_init(PyObject *module);

#endif
