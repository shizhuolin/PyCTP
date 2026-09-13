#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的合约手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingInstrumentCommissionRateField data;
} PyCThostFtdcSyncingInstrumentCommissionRateFieldData;

extern PyTypeObject *PyCThostFtdcSyncingInstrumentCommissionRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingInstrumentCommissionRateFieldType_exec(PyObject *module);

#endif