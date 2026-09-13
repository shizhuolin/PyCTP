#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTEXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入执行宣告操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputExecOrderActionField data;
} PyCThostFtdcInputExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcInputExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputExecOrderActionFieldType_exec(PyObject *module);

#endif