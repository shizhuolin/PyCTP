#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前期权合约手续费的详细内容

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionInstrCommRateField data;
} PyCThostFtdcOptionInstrCommRateFieldData;

extern PyTypeObject *PyCThostFtdcOptionInstrCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionInstrCommRateFieldType_exec(PyObject *module);

#endif