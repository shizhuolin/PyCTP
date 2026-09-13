#ifndef PYCTP_TYPES_PYCTHOSTFTDCERREXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCERREXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误执行宣告操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcErrExecOrderActionField data;
} PyCThostFtdcErrExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcErrExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcErrExecOrderActionFieldType_exec(PyObject *module);

#endif