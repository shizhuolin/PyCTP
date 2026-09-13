#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEEXECORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所执行宣告信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeExecOrderField data;
} PyCThostFtdcExchangeExecOrderFieldData;

extern PyTypeObject *PyCThostFtdcExchangeExecOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeExecOrderFieldType_exec(PyObject *module);

#endif