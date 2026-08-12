#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///保证金监管系统经纪公司密钥

typedef struct PyCThostFtdcCFMMCBrokerKeyField {
    PyObject_HEAD
    CThostFtdcCFMMCBrokerKeyField data;
} PyCThostFtdcCFMMCBrokerKeyField;

extern PyTypeObject PyCThostFtdcCFMMCBrokerKeyFieldType;

extern int PyCThostFtdcCFMMCBrokerKeyFieldType_init(PyObject *module);

#endif
