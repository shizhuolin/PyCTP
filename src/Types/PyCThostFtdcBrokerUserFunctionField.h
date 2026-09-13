#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司用户功能权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerUserFunctionField data;
} PyCThostFtdcBrokerUserFunctionFieldData;

extern PyTypeObject *PyCThostFtdcBrokerUserFunctionFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerUserFunctionFieldType_exec(PyObject *module);

#endif