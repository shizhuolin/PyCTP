#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADEPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradeParamField data;
} PyCThostFtdcTradeParamFieldData;

extern PyTypeObject *PyCThostFtdcTradeParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradeParamFieldType_exec(PyObject *module);

#endif