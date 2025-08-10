#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTGIPADDRPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTGIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数

typedef struct PyCThostFtdcTGIpAddrParamField {
    PyObject_HEAD
    CThostFtdcTGIpAddrParamField data;
} PyCThostFtdcTGIpAddrParamField;

extern PyTypeObject PyCThostFtdcTGIpAddrParamFieldType;

extern int PyCThostFtdcTGIpAddrParamFieldType_init(PyObject *module);

#endif
