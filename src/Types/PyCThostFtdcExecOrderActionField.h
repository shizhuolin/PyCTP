#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///执行宣告操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExecOrderActionField data;
} PyCThostFtdcExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExecOrderActionFieldType_exec(PyObject *module);

#endif