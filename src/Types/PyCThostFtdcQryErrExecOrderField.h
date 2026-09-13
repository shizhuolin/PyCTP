#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYERREXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYERREXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误执行宣告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryErrExecOrderField data;
} PyCThostFtdcQryErrExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryErrExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryErrExecOrderFieldType_exec(PyObject *module);

#endif