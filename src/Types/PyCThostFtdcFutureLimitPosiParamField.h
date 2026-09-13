#ifndef PYCTP_TYPES_PYCTHOSTFTDCFUTURELIMITPOSIPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFUTURELIMITPOSIPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货持仓限制参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcFutureLimitPosiParamField data;
} PyCThostFtdcFutureLimitPosiParamFieldData;

extern PyTypeObject *PyCThostFtdcFutureLimitPosiParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcFutureLimitPosiParamFieldType_exec(PyObject *module);

#endif