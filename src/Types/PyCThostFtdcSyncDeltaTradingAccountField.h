#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTATRADINGACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTATRADINGACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平资金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaTradingAccountField data;
} PyCThostFtdcSyncDeltaTradingAccountFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaTradingAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaTradingAccountFieldType_exec(PyObject *module);

#endif