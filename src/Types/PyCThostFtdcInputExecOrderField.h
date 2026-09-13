#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTEXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的执行宣告

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputExecOrderField data;
} PyCThostFtdcInputExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcInputExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputExecOrderFieldType_exec(PyObject *module);

#endif