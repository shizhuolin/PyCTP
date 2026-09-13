#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExecOrderField data;
} PyCThostFtdcExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcExecOrderFieldType_exec(PyObject *module);

#endif