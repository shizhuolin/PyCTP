#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合合约安全系数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCombInstrumentGuardField data;
} PyCThostFtdcQryCombInstrumentGuardFieldData;

extern PyTypeObject *PyCThostFtdcQryCombInstrumentGuardFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCombInstrumentGuardFieldType_exec(PyObject *module);

#endif