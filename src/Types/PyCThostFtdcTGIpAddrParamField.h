#ifndef PYCTP_TYPES_PYCTHOSTFTDCTGIPADDRPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTGIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTGIpAddrParamField data;
} PyCThostFtdcTGIpAddrParamFieldData;

extern PyTypeObject *PyCThostFtdcTGIpAddrParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcTGIpAddrParamFieldType_exec(PyObject *module);

#endif