#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权手续费率查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOptionInstrCommRateField data;
} PyCThostFtdcQryOptionInstrCommRateFieldData;

extern PyTypeObject *PyCThostFtdcQryOptionInstrCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOptionInstrCommRateFieldType_exec(PyObject *module);

#endif