#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告操作查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeExecOrderActionField data;
} PyCThostFtdcQryExchangeExecOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeExecOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderActionFieldType_exec(PyObject *module);

#endif