#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///成交

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradeField data;
} PyCThostFtdcTradeFieldData;

extern PyTypeObject *PyCThostFtdcTradeFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradeFieldType_exec(PyObject *module);

#endif