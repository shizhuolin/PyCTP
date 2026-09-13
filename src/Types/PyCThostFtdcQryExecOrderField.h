#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExecOrderField data;
} PyCThostFtdcQryExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExecOrderFieldType_exec(PyObject *module);

#endif