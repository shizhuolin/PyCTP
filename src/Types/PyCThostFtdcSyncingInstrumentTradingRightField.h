#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingInstrumentTradingRightField data;
} PyCThostFtdcSyncingInstrumentTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcSyncingInstrumentTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingInstrumentTradingRightFieldType_exec(PyObject *module);

#endif