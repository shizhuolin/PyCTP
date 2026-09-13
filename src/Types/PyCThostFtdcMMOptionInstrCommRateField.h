#ifndef PYCTP_TYPES_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前做市商期权合约手续费的详细内容

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMMOptionInstrCommRateField data;
} PyCThostFtdcMMOptionInstrCommRateFieldData;

extern PyTypeObject *PyCThostFtdcMMOptionInstrCommRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcMMOptionInstrCommRateFieldType_exec(PyObject *module);

#endif