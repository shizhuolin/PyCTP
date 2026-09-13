#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTCOMMISSIONRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTCOMMISSIONRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询手续费率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentCommissionRateField data;
} PyCThostFtdcQryInstrumentCommissionRateFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentCommissionRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentCommissionRateFieldType_exec(PyObject *module);

#endif