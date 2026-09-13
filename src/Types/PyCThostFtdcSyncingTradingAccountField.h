#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGTRADINGACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGTRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的交易账号

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingTradingAccountField data;
} PyCThostFtdcSyncingTradingAccountFieldData;

extern PyTypeObject *PyCThostFtdcSyncingTradingAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingTradingAccountFieldType_exec(PyObject *module);

#endif