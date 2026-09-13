#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTHOSTUSERFUNCTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTHOSTUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///Thost终端用户功能权限查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryThostUserFunctionField data;
} PyCThostFtdcQryThostUserFunctionFieldData;

extern PyTypeObject *PyCThostFtdcQryThostUserFunctionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryThostUserFunctionFieldType_exec(PyObject *module);

#endif