#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYIPADDRPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryIpAddrParamField data;
} PyCThostFtdcQryIpAddrParamFieldData;

extern PyTypeObject *PyCThostFtdcQryIpAddrParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryIpAddrParamFieldType_exec(PyObject *module);

#endif