#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRMINIMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRMINIMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前期权合约最小保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionInstrMiniMarginField data;
} PyCThostFtdcOptionInstrMiniMarginFieldData;

extern PyTypeObject *PyCThostFtdcOptionInstrMiniMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionInstrMiniMarginFieldType_exec(PyObject *module);

#endif