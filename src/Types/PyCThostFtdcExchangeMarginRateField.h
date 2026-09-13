#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeMarginRateField data;
} PyCThostFtdcExchangeMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcExchangeMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeMarginRateFieldType_exec(PyObject *module);

#endif