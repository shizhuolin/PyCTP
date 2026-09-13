#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEEXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeExecOrderActionField data;
} PyCThostFtdcExchangeExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcExchangeExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeExecOrderActionFieldType_exec(PyObject *module);

#endif