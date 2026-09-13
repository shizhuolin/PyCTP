#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRADINGCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易编码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTradingCodeField data;
} PyCThostFtdcQryTradingCodeFieldData;

extern PyTypeObject *PyCThostFtdcQryTradingCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTradingCodeFieldType_exec(PyObject *module);

#endif