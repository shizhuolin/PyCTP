#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMBINSTRUMENTGUARDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMBINSTRUMENTGUARDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合合约安全系数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCombInstrumentGuardField data;
} PyCThostFtdcCombInstrumentGuardFieldData;

extern PyTypeObject *PyCThostFtdcCombInstrumentGuardFieldType;
extern int PyCTP_module_add_PyCThostFtdcCombInstrumentGuardFieldType_exec(PyObject *module);

#endif