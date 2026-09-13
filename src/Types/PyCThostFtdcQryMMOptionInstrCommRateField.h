#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMMOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMMOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///做市商期权手续费率查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMMOptionInstrCommRateField data;
} PyCThostFtdcQryMMOptionInstrCommRateFieldData;

extern PyTypeObject *PyCThostFtdcQryMMOptionInstrCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMMOptionInstrCommRateFieldType_exec(PyObject *module);

#endif