#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSUPERUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询管理用户功能权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySuperUserFunctionField data;
} PyCThostFtdcQrySuperUserFunctionFieldData;

extern PyTypeObject *PyCThostFtdcQrySuperUserFunctionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySuperUserFunctionFieldType_exec(PyObject *module);

#endif