#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentMarginRateField data;
} PyCThostFtdcInstrumentMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentMarginRateFieldType_exec(PyObject *module);

#endif