#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYERREXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误执行宣告操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryErrExecOrderActionField data;
} PyCThostFtdcQryErrExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryErrExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryErrExecOrderActionFieldType_exec(PyObject *module);

#endif