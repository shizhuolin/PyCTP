#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMMINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMMINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询做市商合约手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMMInstrumentCommissionRateField data;
} PyCThostFtdcQryMMInstrumentCommissionRateFieldData;

extern PyTypeObject *PyCThostFtdcQryMMInstrumentCommissionRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMMInstrumentCommissionRateFieldType_exec(PyObject *module);

#endif