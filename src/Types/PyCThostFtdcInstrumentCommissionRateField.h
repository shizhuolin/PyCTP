#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentCommissionRateField data;
} PyCThostFtdcInstrumentCommissionRateFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentCommissionRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentCommissionRateFieldType_exec(PyObject *module);

#endif