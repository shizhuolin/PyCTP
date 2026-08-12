#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPADDRPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数查询

typedef struct PyCThostFtdcQryIpAddrParamField {
    PyObject_HEAD
    CThostFtdcQryIpAddrParamField data;
} PyCThostFtdcQryIpAddrParamField;

extern PyTypeObject PyCThostFtdcQryIpAddrParamFieldType;

extern int PyCThostFtdcQryIpAddrParamFieldType_init(PyObject *module);

#endif
