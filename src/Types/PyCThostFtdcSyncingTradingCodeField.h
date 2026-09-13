#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGTRADINGCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGTRADINGCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的交易代码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingTradingCodeField data;
} PyCThostFtdcSyncingTradingCodeFieldData;

extern PyTypeObject *PyCThostFtdcSyncingTradingCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingTradingCodeFieldType_exec(PyObject *module);

#endif