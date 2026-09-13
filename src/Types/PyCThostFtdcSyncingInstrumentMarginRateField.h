#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingInstrumentMarginRateField data;
} PyCThostFtdcSyncingInstrumentMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncingInstrumentMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingInstrumentMarginRateFieldType_exec(PyObject *module);

#endif