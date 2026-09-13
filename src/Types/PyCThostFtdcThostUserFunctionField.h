#ifndef PYCTP_TYPES_PYCTHOSTFTDCTHOSTUSERFUNCTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTHOSTUSERFUNCTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///Thost终端用户功能权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcThostUserFunctionField data;
} PyCThostFtdcThostUserFunctionFieldData;

extern PyTypeObject *PyCThostFtdcThostUserFunctionFieldType;
extern int PyCTP_module_add_PyCThostFtdcThostUserFunctionFieldType_exec(PyObject *module);

#endif