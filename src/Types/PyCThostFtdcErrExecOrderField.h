#ifndef PYCTP_TYPES_PYCTHOSTFTDCERREXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCERREXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误执行宣告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcErrExecOrderField data;
} PyCThostFtdcErrExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcErrExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcErrExecOrderFieldType_exec(PyObject *module);

#endif