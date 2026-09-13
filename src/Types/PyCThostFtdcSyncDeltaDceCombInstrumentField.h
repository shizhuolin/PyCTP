#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTADCECOMBINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平组合优先级

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaDceCombInstrumentField data;
} PyCThostFtdcSyncDeltaDceCombInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaDceCombInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_exec(PyObject *module);

#endif