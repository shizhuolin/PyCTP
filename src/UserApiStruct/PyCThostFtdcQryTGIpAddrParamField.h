#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTGIPADDRPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTGIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数查询

typedef struct PyCThostFtdcQryTGIpAddrParamField {
    PyObject_HEAD
    CThostFtdcQryTGIpAddrParamField data;
} PyCThostFtdcQryTGIpAddrParamField;

extern PyTypeObject PyCThostFtdcQryTGIpAddrParamFieldType;

extern int PyCThostFtdcQryTGIpAddrParamFieldType_init(PyObject *module);

#endif
