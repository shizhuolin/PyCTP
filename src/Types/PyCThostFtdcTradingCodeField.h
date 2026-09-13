#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易编码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingCodeField data;
} PyCThostFtdcTradingCodeFieldData;

extern PyTypeObject *PyCThostFtdcTradingCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingCodeFieldType_exec(PyObject *module);

#endif