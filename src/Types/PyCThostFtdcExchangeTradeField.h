#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGETRADEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGETRADEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所成交

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeTradeField data;
} PyCThostFtdcExchangeTradeFieldData;

extern PyTypeObject *PyCThostFtdcExchangeTradeFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeTradeFieldType_exec(PyObject *module);

#endif