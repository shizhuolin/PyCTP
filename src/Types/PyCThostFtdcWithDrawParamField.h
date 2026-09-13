#ifndef PYCTP_TYPES_PYCTHOSTFTDCWITHDRAWPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCWITHDRAWPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///可提控制参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcWithDrawParamField data;
} PyCThostFtdcWithDrawParamFieldData;

extern PyTypeObject *PyCThostFtdcWithDrawParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcWithDrawParamFieldType_exec(PyObject *module);

#endif