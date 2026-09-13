#ifndef PYCTP_TYPES_PYCTHOSTFTDCIPADDRPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcIpAddrParamField data;
} PyCThostFtdcIpAddrParamFieldData;

extern PyTypeObject *PyCThostFtdcIpAddrParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcIpAddrParamFieldType_exec(PyObject *module);

#endif