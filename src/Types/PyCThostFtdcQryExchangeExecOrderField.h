#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeExecOrderField data;
} PyCThostFtdcQryExchangeExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeExecOrderFieldType_exec(PyObject *module);

#endif