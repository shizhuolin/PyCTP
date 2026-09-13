#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前期权合约保证金调整系数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionInstrMarginAdjustField data;
} PyCThostFtdcOptionInstrMarginAdjustFieldData;

extern PyTypeObject *PyCThostFtdcOptionInstrMarginAdjustFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionInstrMarginAdjustFieldType_exec(PyObject *module);

#endif