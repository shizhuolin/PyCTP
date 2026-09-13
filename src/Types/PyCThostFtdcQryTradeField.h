#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRADEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询成交

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTradeField data;
} PyCThostFtdcQryTradeFieldData;

extern PyTypeObject *PyCThostFtdcQryTradeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTradeFieldType_exec(PyObject *module);

#endif